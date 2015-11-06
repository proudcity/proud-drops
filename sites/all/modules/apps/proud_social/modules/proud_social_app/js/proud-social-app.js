
(function($, Drupal) {
  Drupal.behaviors.socialApp = {
    attach: function(context, settings) {
      var $app = $('#social-app', context);
      $app.once('appinit', function() {
        angular.bootstrap($app, ['socialAppParent']);
      });
    }
  };
})(jQuery, Drupal);