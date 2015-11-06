<?php
/**
 * @file
 * proud_admin.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function proud_admin_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-admin_dashboard:user
  $menu_links['menu-admin_dashboard:user'] = array(
    'menu_name' => 'menu-admin',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin_dashboard:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Dashboard');

  return $menu_links;
}
