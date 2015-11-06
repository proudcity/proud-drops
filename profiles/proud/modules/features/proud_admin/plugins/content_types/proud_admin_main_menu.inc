<?php


$plugin = array(
  'single' => TRUE,  
  'title' => t('Manage main menu'),
  'description' => t('Manage main menu link'),
  'category' => t('Administration'),
  'render callback' => 'proud_admin_manage_menu_render', 
  'all contexts' => TRUE, // This is NEEDED to be able to use substitution strings in your pane.
);


/**
 * Run-time rendering of the body of the block (content type)
 * See ctools_plugin_examples for more advanced info
 */
function proud_admin_manage_menu_render($subtype, $conf, $args, $contexts) {
  $block = new stdClass();
  $block->title = '';
  //@ todo: check access
  $block->content = theme('proud_admin_button', array('icon' => 'bars', 'link' => l('Manage menu', 'admin/structure/menu/manage/main-menu'))); 
  return $block;
}