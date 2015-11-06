<?php


$plugin = array(
  'single' => TRUE,  // Just do this one, it is needed.
  'title' => t('Add Content'),
  'description' => t('Add content action box'),
  'category' => t('Administration'),
  'render callback' => 'proud_admin_add_content_render', // A function that will return the renderable content.
  'all contexts' => TRUE, // This is NEEDED to be able to use substitution strings in your pane.
);


/**
 * Run-time rendering of the body of the block (content type)
 * See ctools_plugin_examples for more advanced info
 */
function proud_admin_add_content_render($subtype, $conf, $args, $contexts) {
  $block = new stdClass();
  $block->title = '';
  $block->content = theme('proud_admin_button', array('icon' => 'plus-circle', 'markup' => theme('proud_admin_add_content_dropdown'))); 
  return $block;
}