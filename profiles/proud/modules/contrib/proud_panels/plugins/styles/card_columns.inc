<?php

/**
 * @file
 * Proud Panels plugin file.
 */

// Largely taken from http://precessionmedia.com/blog/creating-custom-panels-style-plugin-background-image-support
 
// Plugin definition
$plugin = array(
  // Title and description of the plugin
  'title' => t('Card columns'),
  'description' => t('Bootstrap card columns.'),
  // Define a theme function for this plugin
  'render region' => 'card_columns_style_render_region',
  // We'll be using a template for rendering
  'hook theme' => array(
    'card_columns_style' => array(
      'variables' => array(
        'content' => NULL,
        'style_attributes' => array(),
      ),
      'path' => drupal_get_path('module', 'proud_panels') . '/plugins/styles/templates',
      'template' => 'card-columns',
    ),
  ),
  // This defines the settings form for the plugin
  'settings form' => 'card_columns_style_settings_form',
);


/**
 * Settings form callback.
 */
function card_columns_style_settings_form($form, $form_state) {
  $form['columns'] = array(
    '#type' => 'radios',
    '#title' => t('Columns'),
    '#description' => t('How many button links should appear in each row?'),
    '#options' => array(
      1 => proud_panels_add_pattern_link(1, 'card-columns'),
      2 => proud_panels_add_pattern_link(2, 'card-columns'),
      3 => proud_panels_add_pattern_link(3, 'card-columns'),
      4 => proud_panels_add_pattern_link(4, 'card-columns'),
    ),
    '#default_value' => (isset($form['columns'])) ? $form['columns'] : 2,
    '#required' => TRUE,
  );

  $form['equalize'] = array(
    '#type' => 'checkbox',
    '#title' => t('Equalize the height of cards in columns'),
    '#options' => array(
      0 => t("Natural card height"),
      1 => t("Equalize card heights")
    ),
    '#default_value' => (isset($form['equalize'])) ? $form['equalize'] : 1,
  );
  
  $form['attributes'] = array(
    '#title' => t('Attributes'),
  ) + _proud_panels_wrapper_attribute_options($form['attributes']);


  return $form;
}


/**
 * Render callback.
 */
function theme_card_columns_style_render_region($vars) {
  $settings = $vars['settings'];

  $style_attributes = array('class' => array('card-columns', $settings['attributes']['style']));

  switch($settings['columns']) {
    case 1:
      $style_attributes['class'][] = 'card-columns-xs-1';
      break;
    case 2:
      $style_attributes['class'][] = 'card-columns-xs-1 card-columns-sm-2';
      break;
    case 3:
      $style_attributes['class'][] = 'card-columns-xs-1 card-columns-sm-2 card-columns-md-3';
      break;
    case 4:
      $style_attributes['class'][] = 'card-columns-xs-1 card-columns-sm-2 card-columns-md-4';
      break;
  }

  if($settings['equalize']) {
    $style_attributes['class'][] = 'card-columns-equalize';
  }
  
  // Add our classes to the attrubutes array, if any defined
  if ($settings['attributes']['class']) {
    $style_attributes['class'] += explode(' ', $settings['attributes']['class']);
  }
   
  $content = implode($vars['panes']);
 
  return theme('card_columns_style', array(
      'content' => $content,
      'style_attributes' => $style_attributes,
    )
  );
}