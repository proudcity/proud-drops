<?php


$plugin = array(
  'single' => TRUE,  
  'title' => t('Divider'),
  'description' => t('Divides content'),
  'category' => t('Page Content'),
  'render callback' => 'proud_panels_hr_render', 
  'all contexts' => TRUE, // This is NEEDED to be able to use substitution strings in your pane.
);


/**
 * Run-time rendering of the body of the block (content type)
 * See ctools_plugin_examples for more advanced info
 */
function proud_panels_hr_render($subtype, $conf, $args, $contexts) {
  $block = new stdClass();
  $block->title = '';
  $block->content = '<hr/>'; 
  return $block;
}