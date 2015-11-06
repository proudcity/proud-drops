'use strict';

angular.module('socialApp', [
  'iso.directives',
  'ngResource',
  'ngSanitize'
])

.run(
  [          '$rootScope', '$window', 
    function ($rootScope,   $window) {

      var drupal = typeof Drupal !== 'undefined' ? Drupal : {}; 

      // It's very handy to add references to $state and $stateParams to the $rootScope
      $rootScope.socialApi = _.get(drupal, 'settings.social_wall.socialApi') || 'http://45.55.8.62:8080/api/';
    }
  ]
)

// See https://www.wikipedia.com/services/api/wikipedia.photos.search.html
// Photo url documentation: https://www.wikipedia.com/services/api/misc.urls.html
.factory('SocialFeed', ['$resource', '$rootScope', function ($resource, $rootScope) {
  
  return {
    getUser: function(name, services, count) {
      var url = $rootScope.socialApi + name + '/feed';
      return $resource(url, {
        format: 'json',
        action: 'query',
        callback: 'JSON_CALLBACK'
      }, { 
        'load': { 
          method: 'JSONP',
          cache : true
        },
        'query': {
          cache : true,
          method: 'GET',
          isArray: true
        }
      });
    }
  }
}])

.filter('parseUrlFilter', function () {
    var urlPattern = /(http|ftp|https):\/\/[\w-]+(\.[\w-]+)+([\w.,@?^=%&amp;:\/~+#-]*[\w@?^=%&amp;\/~+#-])?/gi;
    var hashPattern = /(^|\s)#(\w*[a-zA-Z_]+\w*)/gim;
    var mentionPattern =  /(^|\s)\@(\w*[a-zA-Z_]+\w*)/gim;
    return function (text, target, service) {
      var replacedText = text 
                       ? text.replace(urlPattern, '<a target="' + target + '" href="$&">$&</a>')
                       : text;
      if(replacedText) {
        if(service === 'twitter'){
            // replace #hashtags and send them to twitter
            replacedText = replacedText.replace(hashPattern, '$1<a class="hashtag" href="https://twitter.com/search?q=%23$2" target="' + target + '">#$2</a>');
            replacedText = replacedText.replace(mentionPattern, '$1<a class="hashtag" href="https://twitter.com/$2" target="' + target + '">@$2</a>');
        } 
        else if(service === 'instagram'){
            replacedText = replacedText.replace(hashPattern, '$1<a class="hashtag" href="https://instagram.com/explore/tags/$2" target="' + target + '">#$2</a>');
            replacedText = replacedText.replace(mentionPattern, '$1<a class="hashtag" href="https://instagram.com/$2" target="' + target + '">@$2</a>');

        }
        else if(service === 'facebook'){
            replacedText = replacedText.replace(hashPattern, '$1<a class="hashtag" href="https://facebook.com/hashtag/$2" target="' + target + '">#$2</a>');
        }
      }
      return replacedText;
    };
})

.controller('SocialController', ['$scope', 'SocialFeed', '$filter', '$sce', 
                         function($scope,   SocialFeed,   $filter,   $sce){

  $scope.inited = false;

  $scope.services = {
    'facebook': {title: 'Facebook', icon: 'fa-facebook-square'},
    'twitter': {title: 'Twitter', icon: 'fa-twitter-square'},
    'youtube': {title: 'Youtube', icon: 'fa-youtube-play'},
    'instagram': {title: 'instagram', icon: 'fa-instagram'}
  };

  $scope.activeServices = 'all';

  // Grab social "user"
  var citySocial = 'newyork_ny',
      settings   = _.get($scope, '$parent.settings');

  if(_.has(settings, 'agencies') && settings.agencies.length) {
    citySocial = settings.city + '_' + settings.state_short;
    citySocial = citySocial.toLowerCase().replace(' ', '');
  }

  var userFeed = SocialFeed.getUser(citySocial);

  // Toggle social source
  $scope.switchService = function(service, event, limit, callback) {
    if(event) {
      event.preventDefault();
    }
    var isActive = $scope.isServiceActive(service),
        runQuery = false,
        callback = callback || function() {};

    // switch active
    if($scope.inited && !isActive) {
      $scope.activeServices = service;
      runQuery = true;
    }
    // Run the query
    if(runQuery || !$scope.inited) {
      userFeed.query({
        'services[]': $scope.activeServices == 'all' ? [] : [$scope.activeServices],
        limit: limit || 20
      }, function(data) {
        // First time through, find available services
        if(!$scope.inited) {
          var active = [], services = _.clone($scope.services);
          _.map(data, function(item) {
            active = _.union(active, [item.service]);
          });
          _.map(services, function(service, key) {
            if(_.contains(active, key)) {
              services[key].active = true;
            }
          });
          $scope.services = services;
        }
        // Set data
        $scope.social = $scope.preSort 
                      ? _.chain(data).sortBy('date').reverse().value()
                      : data;
        $scope.inited = true;
        callback();
      });
    }
    return false;
  };

  $scope.isServiceActive = function(service) {
    return $scope.activeServices == service;
  }

  $scope.showServiceTab = function(service) {
    return $scope.services[service].active;
  }

  $scope.recent = function() {
    $scope.container.isotope({sortBy : 'date'});
  }

  $scope.shuffle = function() {
    $scope.$emit('iso-method', {name:'shuffle', params:null});
  }

  $scope.getPublishedDate = function(date) {
    return new Date(date).getTime();
  }

  $scope.getPostUrl = function(item) {
    switch(item.service) {
      case 'facebook':
        var url = 'http://facebook.com/' + item.account;
        return item.id
             ? url + '/posts/' + item.id.substring((item.id.indexOf('_') + 1))
             : url;
        break;
      
      default:
        return item.url;
        break;
    }
  }

  $scope.toSafe = function(text, service) {
    return $sce.trustAsHtml($filter('parseUrlFilter')(text, '_blank', service));
  }

}])


// Isotope social wall
.directive('socialWall', function factory($window, $browser, $http, $timeout) {
  return {
    restrict: 'A',
    controller: "SocialController",
    templateUrl: 'views/apps/socialApp/social.html',
    link: {
      pre: function postLink($scope, $element, $attributes) {
        // Init vars
        $scope.socialPostCount = $scope.socialPostCount || 20;
        $scope.socialShowControls = $scope.socialHideControls || false;
        $scope.preSort = true;

        // call init
        if(!$scope.inited) {
          $scope.switchService(null, null, $scope.socialPostCount);
        }

        // Grab container jquery ref
        $scope.container = $element.children('[isotope-container]');
      },
      post: function postLink($scope, $element, $attributes) {
        // Watch social
        $scope.$watch('social', function(value) {
          if(!$scope.inited) {
            $scope.container.isotope({
              getSortData : {
                date: function($elem) {
                  return $elem.data('date');
                }
              }
            });
          }
          if($scope.social) {
            $timeout(function() {
              var imgLoad = $element.waitForImages();
              imgLoad.done(function() {
                
                //$scope.$emit('iso-option', {sortBy : 'date'});
                $scope.container.isotope({sortBy : 'date', sortAscending: false});
                // $scope.refreshIso();
                // 
              });
            }, 0);
          }
        });
      }
    }
  }
})


// Simple social timeline
.directive('socialTimeline', function factory($window, $browser, $http, $timeout) {
  return {
    restrict: 'A',
    controller: "SocialController",
    templateUrl: 'views/apps/socialApp/social-timeline.html',
    compile: function(tElem, tAttrs) {
      return {
        pre: function preLink ($scope, $element, $attributes) {
          // Init vars
          $scope.socialPostCount = $scope.socialPostCount || 20;
          $scope.socialShowControls = $scope.socialHideControls || false;
          $scope.preSort = true;

          // so we can switch right/left ordering on tab change
          $scope.oddEvenSwitch = 0;
          $scope.timelineSwitchService = function(service, event) {
            
            $scope.switchService(service, event, $scope.socialPostCount, function() {
              $scope.oddEvenSwitch = $scope.oddEvenSwitch ? 0 : 1;
            });
          }

          // call init
          if(!$scope.inited) {
            $scope.switchService(null, null, $scope.socialPostCount);
          }
        }
      }
    }
  }
})

