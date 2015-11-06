<?php


$plugin = array(
  'single' => TRUE,  
  'title' => t('Google Translate dropdown'),
  'description' => t('Adds a Google Translate dropdown select'),
  'category' => t('Blocks'),
  'render callback' => 'proud_panels_translate_render', 
  'all contexts' => TRUE, // This is NEEDED to be able to use substitution strings in your pane.
);


/**
 * Panel pane display.
 */
function proud_panels_translate_render($subtype, $conf, $args, $contexts) {
  $block = new stdClass();
  $block->title = '';
  $block->content = theme('proud_panels_pane_translate'); 
  return $block;
}
