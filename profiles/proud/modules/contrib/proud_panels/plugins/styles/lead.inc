<?php
/**
 * @file
 * Proud Panels plugin file.
 */

/**
* Implementation of hook_panels_styles().
*/
// Plugin definition.
$plugin = array(
  'title' => t('Lead'),
  'description' => t('Add the lead class for subtitles.'),
  'render pane' => 'proud_panels_lead_render_pane',
);

function theme_proud_panels_lead_render_pane($vars) {
  $vars['settings']['element'] = 'div';
  $vars['settings']['attributes']['class'] = 'lead';

  // @todo: strip_tags and change element to p
  //$vars['content'] = strip_tags(drupal_render($vars['content']));

  return theme_proud_panels_wrapper_render_pane($vars);
}

