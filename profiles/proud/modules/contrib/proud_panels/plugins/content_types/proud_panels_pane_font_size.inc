<?php


$plugin = array(
  'single' => TRUE,  
  'title' => t('Font size dropdown'),
  'description' => t('Allow users to increase/decrease font size'),
  'category' => t('Blocks'),
  'render callback' => 'proud_panels_pane_font_size_render', 
  'all contexts' => TRUE, // This is NEEDED to be able to use substitution strings in your pane.
);


/**
 * Panel pane display.
 */
function proud_panels_pane_font_size_render($subtype, $conf, $args, $contexts) {
  $block = new stdClass();
  $block->title = '';
  $block->content = theme('proud_panels_pane_font_size'); 
  return $block;
}
