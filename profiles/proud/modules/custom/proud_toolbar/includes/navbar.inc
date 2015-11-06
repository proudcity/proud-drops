<?php

/**
 * @file
 * Front end proud-navbar
 */

/**
 * Prerender function for the proud_navbar.
 *
 * Since building the proud_navbar takes some time, it is done just prior to
 * rendering to ensure that it is built only if it will be displayed.
 */
function proud_toolbar_pre_render_navbar($proud_navbar) {
  $proud_navbar = array_merge($proud_navbar, proud_toolbar_view_navbar());
  return $proud_navbar;
}

/**
 * Prerender function for the proud_navbar_overlay.
 */
function proud_toolbar_pre_render_navbar_overlay($proud_navbar_overlay) {
  $proud_navbar_overlay = array_merge($proud_navbar_overlay, proud_toolbar_view_navbar_overlay());
  return $proud_navbar_overlay;
}


/**
 * Implements hook_preprocess_proud_navbar().
 *
 * Adding the 'overlay-displace-top' class to the proud_navbar pushes the overlay
 * down, so it appears below the proud_navbar.
 */
function proud_toolbar_preprocess_proud_navbar(&$variables) {
  $variables['classes_array'][] = "overlay-displace-top";
}

/**
 * Builds the admin menu as a structured array ready for drupal_render().
 *
 * @return
 *   Array of links and settings relating to the admin menu.
 */
function proud_toolbar_view_navbar() {
  global $user;

  $module_path = drupal_get_path('module', 'proud_toolbar');
  $build = array(
    '#theme' => 'proud_navbar',
    '#attached'=> array(
      'js' => array(
        $module_path . '/js/proud-navbar.js',
        array(
          'data' => array('proud_navbar' => array(
            'icons' => (int)variable_get('proud_toolbar_icons', TRUE)
          )),
          'type' => 'setting'
        ),
      )
    ),
  );

  $build['logo'] = array(
    '#theme' => 'link',
    '#text' => theme_image(array(
      'path' => ( $path = proudtheme_get_inverted_logo() )
                ? $path
                : theme_get_setting('logo'), 
      'alt' => t('Home'),
      'title' => t('Home'),
      'attributes' => array(
        'style' => array('height:38px;'),
        'class' => array('logo')
      )
    )),
    '#path' => url('<front>'),
    '#options' => array(
      'html' => TRUE,
      'attributes' => array(
        'title' => t('Home'),
        'rel' => 'home',
        'id' => 'logo'
      )
    )
  );

  $build['logo_second'] = $build['logo'];
  $build['logo_second']['#options']['id'] = 'logo-header';

  $build['name'] = array(
    '#theme' => 'link',
    '#text' => '<strong>' . variable_get('site_name') . '</strong>',
    '#path' => url('<front>'),
    '#options' => array(
      'html' => TRUE,
      'attributes' => array(
        'title' => t('Home'),
        'rel' => 'home',
        'class' => array(
          'navbar-brand'
        )
      )
    )
  );

  $pid = variable_get('menu_main_links_source', 'main-menu');
  $build['menu'] = menu_tree($pid);
  drupal_alter('proud_navbar_menu', $build['menu']);

  // Add a "home" link.
  $link = array(
    'home' => array(
      'title' => variable_get('proud_toolbar_icons', TRUE) ? '<i class="fa fa-home"></i>' : 'Home',
      'href' => '<front>',
      'html' => TRUE,
      'attributes' => array('title' => t('Home')),
    ),
  );

  $build['#theme'] = 'proud_navbar';

  return $build;
}

/**
 * Builds the overlay as a structured array ready for drupal_render().
 *
 * @return
 *   Array of links and settings relating to the overlay sections;
 */
function proud_toolbar_view_navbar_overlay() {
  $module_path = drupal_get_path('module', 'proud_toolbar');
  
  $build = array(
    '#theme' => 'proud_navbar_overlay',
    '#attached'=> array(
      'js' => array(
        $module_path . '/js/proud-navbar.js'
      )
    )
  );

  // 311 overlay
  $build['answers'] = array(
    '#markup' => ''
  );
  // Alter
  drupal_alter('proud_navbar_overlay_311', $build['answers']);

  // Search overlay
  $build['search'] = array(
    '#markup' => ''
  );
  // Alter
  drupal_alter('proud_navbar_overlay_search', $build['search']);

  return $build;
}