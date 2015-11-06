<?php
/**
 * @file
 * proud_admin.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function proud_admin_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-admin.
  $menus['menu-admin'] = array(
    'menu_name' => 'menu-admin',
    'title' => 'Admin',
    'description' => 'The administration view shown to normal authenticated admins.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Admin');
  t('The administration view shown to normal authenticated admins.');


  return $menus;
}
