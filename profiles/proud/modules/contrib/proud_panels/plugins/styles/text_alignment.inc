<?php
/**
 * @file
 * 'Wrapper: Element' style.
 */

// Taken from proud_panels

// Plugin definition.
$plugin = array(
  'title' => t('Text alignment'),
  'description' => t('Align and pull the text.'),
  //'render region' => 'proud_panels_wrapper_render_region',
  'render pane' => 'text_alignment_style_render_pane',
  //'settings form' => 'proud_panels_wrapper_element_region_settings_form',
  'pane settings form' => 'text_alignment_style_settings_form',
);




/**
 * Settings form callback.
 */
function text_alignment_style_settings_form($form, $form_state) {
  $form['alignment'] = array(
    '#type' => 'radios',
    '#title' => t('Alignment'),
    '#options' => array(
      'text-left' => proud_panels_add_pattern_link('Left', 'text-elements'),
      'text-center' => proud_panels_add_pattern_link('Center', 'text-elements'),
      'text-right' => proud_panels_add_pattern_link('Right', 'text-elements'),
      'text-justify' => proud_panels_add_pattern_link('Justify', 'text-elements'),
    ),
    // @todo: add pull here, or somewhere else?
    '#default_value' => (isset($form['alignment'])) ? $form['alignment'] : '',
  );
  
  $form['attributes'] = array(
    '#title' => t('Attributes'),
  ) + _proud_panels_wrapper_attribute_options($form['attributes']);

  return $form;
}


/**
 * Theme callback
 */
function theme_text_alignment_style_render_pane($vars) {
  $vars['settings']['element'] = 'div';  //@todo: another tag?
  $vars['settings']['attributes']['class'] = $vars['settings']['alignment'];
  return theme_proud_panels_wrapper_render_pane($vars);
}

