<?php

/**
 * @file
 * Administration proud-toolbar
 */

/**
 * Prerender function for the proud_toolbar.
 *
 * Since building the proud_toolbar takes some time, it is done just prior to
 * rendering to ensure that it is built only if it will be displayed.
 */
function proud_toolbar_pre_render_toolbar($proud_toolbar) {
  $proud_toolbar = array_merge($proud_toolbar, proud_toolbar_view_toolbar());
  return $proud_toolbar;
}

/**
 * Implements hook_preprocess_proud_toolbar().
 *
 * Adding the 'overlay-displace-top' class to the proud_toolbar pushes the overlay
 * down, so it appears below the proud_toolbar.
 */
function proud_toolbar_preprocess_proud_toolbar(&$variables) {
  $variables['classes_array'][] = "overlay-displace-top";
}

/**
 * Builds the admin menu as a structured array ready for drupal_render().
 *
 * @return
 *   Array of links and settings relating to the admin menu.
 */
function proud_toolbar_view_toolbar() {
  global $user;

  $icons = variable_get('proud_toolbar_icons', TRUE);

  $module_path = drupal_get_path('module', 'proud_toolbar');
  $build = array(
    '#theme' => 'proud_toolbar',
    '#attached'=> array(
      // 'css' => array(
      //   $module_path . '/css/proud-toolbar.css',
      // ),
      'js' => array(
        $module_path . '/js/proud-toolbar.js',
        array(
          'data' => array('proud_toolbar' => array(
            'icons' => (int)$icons,
            'move_local_tasks' => variable_get('proud_toolbar_move_local_tasks', TRUE),
            'move_local_tasks_admin' => variable_get('proud_toolbar_move_local_tasks_admin', FALSE),
            'is_admin' => path_is_admin(current_path()),
            'move_panels_ipe' => variable_get('proud_toolbar_move_panels_ipe', TRUE),
          )),
          'type' => 'setting'
        ),
      )
    ),
  );

  // Retrieve the admin menu from the database.
  /*$build['menu'] = array(
    //'#theme' => 'links__proud_toolbar_menu',
    '#links' => $links,
    '#attributes' => array('id' => 'proud_toolbar-menu'),
    '#heading' => array('text' => t('Administrative proud_toolbar'), 'level' => 'h2', 'class' => 'element-invisible'),
  );*/


  // Add proudcity action button
  // -----------------------------

  $links = array(
    'proudhome' => array(
      'title' => t('ProudCity'),
      'href' => 'http://getproudcity.com',
      'html' => TRUE,
      'attributes' => array('title' => t('ProudCity')),
    )
  );

  $build['toolbar_proudcity'] = array(
    '#theme' => 'links',
    '#links' => $links,
    '#attributes' => array(
      'class' => array('menu dropdown-menu'),
      'aria-labelledby' => 'proud-city'
    ),
  );

  // Alter
  drupal_alter('proud_toolbar_proudcity', $build['toolbar_proudcity']);

  $build['toolbar_proud_image'] = theme_image(array(
    'path' => $module_path . '/images/logo-white.png', 
    'alt' => t('ProudCity logo'),
    'title' => t('ProudCity logo'),
    'attributes' => array(
      'style' => array('height:25px;')
    )
  ));


  // Toolbar main menu
  // ----------------------------
  $build['toolbar_menu'] = menu_tree('menu-admin');
  
  foreach (element_children($build['toolbar_menu']) as $key) {
    $build['toolbar_menu'][$key]['#title'] = _proud_toolbar_menu_icon($build['toolbar_menu'][$key]['#title'], $icons) . $build['toolbar_menu'][$key]['#title'];
    // $build['toolbar_menu'][$key]['#options']['html'] = TRUE;
    $build['toolbar_menu'][$key]['#localized_options']['html'] = TRUE;
  }
  // Alter
  drupal_alter('proud_toolbar_menu', $build['toolbar_menu']);


  // Toolbar content dropdown
  // -----------------------------
  $build['toolbar_content_label'] = variable_get('proud_toolbar_icons', TRUE) 
    ? '<i class="fa fa-plus-circle"></i> ' . t('New')  
    :  t('New');
  $build['toolbar_content'] = array(
    '#theme' => 'links',
    '#links' => array(),
    '#attributes' => array(
      'class' => array('menu dropdown-menu'),
      'aria-labelledby' => 'proud-city-new'
    ),
  );
  foreach (node_type_get_names() as $key => $value) {
    $build['toolbar_content']['#links'][$key] = array(
      'title' => _proud_toolbar_content_icon($key, $icons) . $value,
      'href' => 'node/add/' . $key,
      'html' => TRUE,
      'attributes' => array('title' => t('Add new %value', array('%value' => $value))),
    );
  }
  // Alter
  drupal_alter('proud_toolbar_content_menu', $build['toolbar_content']);


  // Toolbar user menu
  // -----------------------------
  $build['toolbar_user_name'] = $user->mail;
  $build['toolbar_user_picture'] = theme('user_picture', array('account' => $user));
  $build['toolbar_user_menu'] = menu_tree('user-menu');
  // Alter
  drupal_alter('proud_toolbar_user_menu', $build['toolbar_user_menu']);


  // Add a "home" link.
  // -----------------------------
  $link = array(
    'home' => array(
      'title' => variable_get('proud_toolbar_icons', TRUE) ? '<i class="fa fa-home"></i> Home' : 'Home',
      'href' => '<front>',
      'html' => TRUE,
      'attributes' => array('title' => t('Home')),
    ),
  );
  $build['toolbar_home'] = array(
    '#theme' => 'links',
    '#links' => $link,
    '#attributes' => array('class' => array('nav navbar-nav')),
  );

  $build['#theme'] = 'proud_toolbar';

  return $build;
}


/**
 * Gets the icon for a menu item
 *
 * @return
 *  html of the related icon, nothing if no matches
 */
function _proud_toolbar_menu_icon($title) {
  if(!variable_get('proud_toolbar_icons', TRUE)) {
    return '';
  }
  else if(preg_match('/dashboard/i', $title)) {
    return '<i class="fa fa-dashboard"></i> ';
  }
  else if(preg_match('/content/i', $title)) {
    return '<i class="fa fa-th-list"></i> ';
  }
  else if(preg_match('/people/i', $title)) {
    return '<i class="fa fa-users"></i> ';
  }
  return '';
}

/**
 * Gets the icon for a content type
 *
 * @return
 *   html of the related icon, nothing if no matches
 */
function _proud_toolbar_content_icon($content, $icons) {
  if(!$icons) {
    return '';
  }
  switch($content) {
    case 'article': 
      return '<i class="fa fa-file-text"></i> ';
      break;
    case 'document':
      return '<i class="fa fa-paste"></i> ';
      break;
    case 'news':
      return '<i class="fa fa-newspaper-o"></i> ';
      break;
    case 'event':
      return '<i class="fa fa-calendar-plus-o"></i> ';
      break;
    case 'faq':
      return '<i class="fa fa-question-circle"></i> ';
      break;
    case 'landingpage':
      return '<i class="fa fa-th"></i> ';
      break;
    case 'page':
      return '<i class="fa fa-file"></i> ';
      break;
    case 'webform':
      return '<i class="fa fa-list-alt"></i> ';
      break;
  }
}
