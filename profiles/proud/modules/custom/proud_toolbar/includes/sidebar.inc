<?php

/**
 * @file
 * Administration proud-sidebar
 */

/**
 * Prerender function for the proud_sidebar.
 *
 * Since building the proud_sidebar takes some time, it is done just prior to
 * rendering to ensure that it is built only if it will be displayed.
 */
function proud_toolbar_pre_render_sidebar($proud_sidebar) {
  $proud_sidebar = array_merge($proud_sidebar, proud_toolbar_view_sidebar());
  return $proud_sidebar;
}


/**
 * Builds the admin menu as a structured array ready for drupal_render().
 *
 * @return
 *   Array of links and settings relating to the admin menu.
 */
function proud_toolbar_view_sidebar() {
  global $user;

  $module_path = drupal_get_path('module', 'proud_toolbar');
  $build = array(
    '#theme' => 'proud_sidebar',
    '#attached'=> array(
      'css' => array(
        $module_path . '/css/bootstrap-admin.css',
      ),
      'js' => array(
        $module_path . '/js/proud-toolbar.js',
      )
    ),
  );

  $build['top_level'] = array(
    '#theme' => 'item_list',
    '#items' => array(),
    '#attributes' => array(
      'class' => array('nav in'),
      'id' => 'side-menu'
    ),
  );

  $top_level_items = array(
    'admin/structure/menus' => array(
      'title' => t('Menus'),
      'icons' => 'fa-bars'
    ),
    'admin/content' => array(
      'title' => t('Content'),
      'icons' => 'fa-search'
    ),
    'admin/faq/manage' => array(
      'title' => t('Answers'),
      'icons' => 'fa-question-circle'
    ),
    'admin/events/manage' => array(
      'title' => t('Events'),
      'icons' => 'fa-calendar-o'
    ),
    'admin/jobs/manage' => array(
      'title' => t('Jobs'),
      'icons' => 'fa-briefcase'    
    ),
    'admin/analytics' => array(
      'title' => t('Analytics'),
      'icons' => 'fa-line-chart'
    ),
    'admin/people' => array(
      'title' => t('Users'),
      'icons' => 'fa-users'
    )
  );

  // Alter
  drupal_alter('proud_sidebar_top_level', $top_level_items);

  $icons = variable_get('proud_toolbar_icons', TRUE);
  foreach ($top_level_items as $path => $value) {
    $build['top_level']['#items'][strtolower($value['title'])] = theme('link', array(
      'text' => $icons 
              ? '<i class="fa ' . $value['icons'] . '"></i> '. $value['title'] 
              : $value['title'],
      'path' => $path,
      'options'=> array(
        'html' => TRUE,
        'attributes' => array('title' => $value['title']),
      )
    ));
  }

  // Secondary items
  $build['top_level']['#items']['sub_level'] = theme('link', array(
    'text' => $icons 
            ? '<i class="fa fa-fw fa-gears"></i><i class="fa fa-angle-down pull-right"></i> '. t('Setup') 
            : t('Setup'),
    'path' => '',
    'options' => array(
      'html' => TRUE,
      'attributes' => array(
        'data-toggle' => 'collapse',
        'title' => $value['title'],
        'class' => array('collapsed')
      ),
      'fragment' => 'setup-sub'
    )
  )) ;

  $sub_level_items = array(
    'admin/appearance' => array(
      'title' => t('Appearance')
    ),
    'admin/content/social' => array(
      'title' => t('Social')
    ),
    'admin/content/agencies' => array(
      'title' => t('Agencies')
    ),
    'admin/proud/payments' => array(
      'title' => t('Payments')
    ),
    'admin/proud/311' => array(
      'title' => t('311') 
    ),
    'admin/proud/map' => array(
      'title' => t('Map') 
    ),
    'admin/apps' => array(
      'title' => t('Apps') 
    ),
  );

  // Alter
  drupal_alter('proud_sidebar_sub_level', $build['sub_level']);

  $links = array();

  foreach ($sub_level_items as $path => $value) {
    $links[strtolower($value['title'])] = array(
      'title' => $value['title'],
      'href' => $path,
      'html' => TRUE,
      'attributes' => array('title' => $value['title']),
    );
  }

  $build['top_level']['#items']['sub_level'] .= theme('links', array(
    'links' => $links,
    'attributes' => array(
      'class' => array('nav nav-second-level collapse'),
      'id' => 'setup-sub'
    ),
  ));

  return $build;

}