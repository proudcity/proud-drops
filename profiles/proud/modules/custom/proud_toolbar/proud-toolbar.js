



(function($, Drupal) {
  Drupal.behaviors.proudToolbar = {
    attach: function(context, settings) {
      
    if (settings.proud_toolbar.move_local_tasks) {
        $adminMenu = $('#proud-navbar', context);
        var $tabs = $(context).find('ul.tabs.primary');
        $adminMenu.find('#proud-navbar-main-menu')
          .append($tabs.find('li').addClass('proud-menu-tab'));
        $(context).find('ul.tabs.secondary')
          .appendTo('#proud-navbar-main-menu > ul > li.admin-menu-tab.active')
          .removeClass('secondary');
        $tabs.remove();
      }


      if (settings.proud_toolbar.move_panels_ipe) {
        $adminMenu = $('#proud-navbar #proud-navbar-main-menu', context);
        $tabs = $('#panels-ipe-control-container .panels-ipe-button-container', context);

        $adminMenu
          .append($tabs.find('.panels-ipe-pseudobutton-container a').wrap("<li class='proud-menu-tab'></li>").parent());
        $tabs.remove();
      }


      // if   
      // @todo: better multilingual
      if (settings.proud_toolbar.icons) {
        $('#proud-navbar-main-menu .proud-menu-tab a').each(function(){
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
              $(this).text('Manage panels');
              $(this).prepend('<i class="fa fa-map"></i> ');
              break;
            case 'Change layout':
              $(this).prepend('<i class="fa fa-th-large"></i> ');
              break;
          }
        });
      }




    }
  };
})(jQuery, Drupal);

