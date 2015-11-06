<?php


$plugin = array(
  'single' => TRUE,  
  'title' => t('Share dropdown'),
  'description' => t('Quickly share the page or node. Uses Sharethis if module is available.'),
  'category' => t('Blocks'),
  'render callback' => 'proud_panels_pane_share_render', 
  'all contexts' => TRUE, // This is NEEDED to be able to use substitution strings in your pane.
);


/**
 * Panel pane display.
 */
function proud_panels_pane_share_render($subtype, $conf, $args, $contexts) {
  $block = new stdClass();
  $block->title = '';
  $block->content = theme('proud_panels_pane_share'); 
  return $block;
}
