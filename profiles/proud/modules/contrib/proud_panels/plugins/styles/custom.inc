<?php
/**
 * @file
 * 'Wrapper: Element' style.
 */

// Taken from proud_panels

// Plugin definition.
$plugin = array(
  'title' => t('Custom'),
  'description' => t('Wrap with a custom element and class.'),
  'render region' => 'proud_panels_wrapper_render_region',
  'render pane' => 'proud_panels_wrapper_render_pane',
  'settings form' => 'proud_panels_wrapper_element_region_settings_form',
  'pane settings form' => 'proud_panels_wrapper_element_pane_settings_form',
);

/**
 * Region settings form callback.
 */
function proud_panels_wrapper_element_region_settings_form($style_settings) {
  // Content.
  $element_default_value = isset($style_settings['content']['element']) ? $style_settings['content']['element'] : '';
  $form['element'] = array(
    '#title' => t('Tag'),
    '#description' => t('HTML tag to wrap around the field.'),
    '#type' => 'textfield',
    '#default_value' => isset($style_settings['element']) ? $style_settings['element'] : '',
  );
  dpm($style_settings);

  // Content attributes.
  $attributes_default_value = isset($style_settings['content']['attributes']) ? $style_settings['content']['attributes'] : array();
  $form['content']['attributes'] = array(
    '#title' => t('Attributes'),
  ) + _proud_panels_wrapper_attribute_options($attributes_default_value);

  return $form;
}

/**
 * Pane settings form callback.
 */
function proud_panels_wrapper_element_pane_settings_form($style_settings) {
  // Title.
  $element_default_value = isset($style_settings['element']) ? $style_settings['element'] : '';
  $form['element'] = array(
    '#title' => t('Tag'),
    '#description' => t('HTML tag to wrap around the field.'),
    '#type' => 'textfield'
  );

  // Title attributes.
  $attributes_default_value = isset($style_settings['attributes']) ? $style_settings['attributes'] : array();
  $form['attributes'] = array(
    '#title' => t('Attributes'),
  ) + _proud_panels_wrapper_attribute_options($attributes_default_value);

  // Content form items, grabbed from the region settings.
  //$form += proud_panels_wrapper_element_region_settings_form($style_settings);

  return $form;
}