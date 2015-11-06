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
  'title' => t('Heading'),
  'description' => t('Wrap text with a h1, h2, h3, etc.'),
  //'render region' => 'proud_panels_wrapper_render_region',
  'pane settings form' => 'proud_panels_heading_style_settings_form',
  'render pane' => 'proud_panels_heading_style_render_pane',
);

 
function proud_panels_heading_style_settings_form($style_settings) {
  $form['element'] = array(
    '#type' => 'radios',
    '#title' => t('Heading'),
    '#options' => array(
      'h1' => proud_panels_add_pattern_link('h1', 'headings'),
      'h2' => proud_panels_add_pattern_link('h2', 'headings'),
      'h3' => proud_panels_add_pattern_link('h3', 'headings'),
      'h4' => proud_panels_add_pattern_link('h4', 'headings'),
      'h5' => proud_panels_add_pattern_link('h5', 'headings'),
      'h6' => proud_panels_add_pattern_link('h6', 'headings'),
    ),
    '#default_value' => (isset($style_settings['element'])) ? $style_settings['element'] : 'h1',
  );

  $form['page_title'] = array(
    '#type' => 'checkbox',
    '#title' => proud_panels_add_pattern_link('Page title', '1-headings'),
    '#description' => t('Adds a line below the heading'),
    //'#value' => 'page-title',
    '#default_value' => (isset($style_settings['page_title'])) ? $style_settings['page_title'] : '',
  );

  $form['advanced'] = array(
    '#type' => 'fieldset',
    '#title' => t('Advanced'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['advanced']['class'] = array(
    '#type' => 'textfield',
    '#title' => t('CSS Classes'),
    '#description' => t('Enter CSS classes for this style. Separate multiple classes by spaces.'),
    '#default_value' => (isset($form['class'])) ? $form['class'] : '',
  );
 
  return $form;
}



function theme_proud_panels_heading_style_render_pane($vars) {
  // @todo: pane_title;
  //if ($vars['settings']['page_title']) {
  //
  //}
  //dpm($vars['settings']);
  // @todo: strip_tags and change element to p
  //$vars['content'] = strip_tags(drupal_render($vars['content']));

  return theme_proud_panels_wrapper_render_pane($vars);
}

