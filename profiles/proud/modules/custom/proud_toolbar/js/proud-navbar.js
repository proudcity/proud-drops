(function($, Drupal) {
  Drupal.behaviors.proudNavbar = { attach: function(context, settings) {

    var layerOpen = {
        menu: false,
        search: false,
        answers: false,
      },
      layerClasses = {
        'menu': 'menu-nav-open',
        'search': 'search-active',
        'answers': 'active-311'
      }
      $body = $('body');



    // Closes overlays + menus
    // localLayers = ['menu', 'search']
    var closeLayers = function(localLayers) {
      // Default is all
      localLayers = localLayers || _.keys(layerOpen);
      var classes = [];
      _.map(localLayers, function(layer) {
        classes.push(layerClasses[layer]);
        layerOpen[layer] = false;
      });
      // Remove
      $body.removeClass(classes.join(' '));
    }

    // Closes overlays + menus
    var openLayer = function(layer) {
      setTimeout(function() {
        $body.addClass(layerClasses[layer]);
        layerOpen[layer] = true;
        $body.trigger('scroll');
      }, 100);
    }

    var toggleMenu = function() {
      // Just close everything
      if(layerOpen.menu) {
        closeLayers();
        return;
      }
      else {
        closeLayers(['answers', 'search']);
        openLayer('menu');
      }
    };

    var toggleOverlay = function(item) {
      var thisLayer, otherLayer;
      switch(item) {
        case 'answers':
        case 'payments':
        case 'issue':
          thisLayer = 'answers';
          otherLayer = 'search';
          break;

        case 'search':
          thisLayer = 'search';
          otherLayer = 'answers';
          break;
      }

      // Close all
      if(layerOpen[thisLayer]) {
        closeLayers();
      }
      else {
        // Close others, open ours
        closeLayers([otherLayer, 'menu']);
        openLayer(thisLayer);
      }
    }

    $('[data-proud-navbar]').once('proud-navbar', function() {
      var $self = $(this);
      $self.click(function(e) {
        e.preventDefault();
        var data = $self.data('proud-navbar');
        if(data) {
          $body.trigger({
            type:     "proudNavClick",
            event:    data,
            callback: function(error, open, scrollId) {
              if(!error) {
                if(open) {
                  toggleOverlay(data);
                }
                else if(scrollId) {
                  var $scroll = $("#" + scrollId);
                  if($scroll.length) {
                    $('html, body').animate({
                        scrollTop: $scroll.offset().top - 100
                    }, 200);
                  }
                }
              }
            }
          });
        }
      });
    });

    // mobile menu open
    $('#menu-button').once('proud-navbar', function() {
      $(this).click(function(e) {
        e.preventDefault();
        toggleMenu();
      });
    });

    // close overlay
    $('#overlay-311-close, #overlay-search-close').once('proud-navbar', function() {
      $(this).click(function(e) {
        e.preventDefault();
        closeLayers();
      });
    });

  }};
})(jQuery, Drupal);

