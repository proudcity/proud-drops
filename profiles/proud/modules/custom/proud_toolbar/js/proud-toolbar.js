(function($, Drupal) {
  Drupal.behaviors.proudToolbar = { attach: function(context, settings) {

    if(settings.proud_toolbar) {
      var move = settings.proud_toolbar.move_local_tasks
        &&  ((settings.proud_toolbar.move_local_tasks_admin && settings.proud_toolbar.is_admin)
        ||   !settings.proud_toolbar.is_admin);

      var $toolbar = $('#proud-navbar', context);

      if (move) {
          var $tabs = $(context).find('ul.tabs.primary, ul.nav-tabs.primary');
          $toolbar.find('#proud-toolbar-new')
            .append($tabs.find('li').addClass('proud-menu-tab'));
          $(context).find('ul.tabs.secondary')
            .appendTo('#proud-toolbar-new > ul > li:last-child')
            .removeClass('secondary');
          $tabs.remove();
      }


      if (settings.proud_toolbar.move_panels_ipe) {
        $adminMenu = $('#proud-toolbar-new', $toolbar);
        $tabs = $('#panels-ipe-control-container .panels-ipe-button-container', context);

        $adminMenu
          .append($tabs.find('.panels-ipe-pseudobutton-container a').wrap("<li class='proud-menu-tab'></li>").parent());
        
        $toolbar.addClass('panels-ipe-moved');
        $tabs.remove();
      }


      // if   
      // @todo: better multilingual
      if (settings.proud_toolbar.icons) {
        $('#proud-toolbar-new a').each(function(){
          switch($(this).text().replace('(active tab)', '')) {
            case 'View':
              $(this).prepend('<i class="fa fa-eye"></i> ');
              break;
            case 'Edit':
              $(this).prepend('<i class="fa fa-pencil"></i> ');
              break;
            case 'Revisions':
              $(this).prepend('<i class="fa fa-history"></i> ');
              break;
            case 'Customize this page':
              $(this).text('Panels');
              $(this).prepend('<i class="fa fa-th-large"></i> ');
              break;
            case 'Change layout':
              $(this).text('Layout');
              $(this).prepend('<i class="fa fa-columns"></i> ');
              break;
          }
        });
      }
    }
  }}
})(jQuery, Drupal);

