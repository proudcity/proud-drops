<?php

/**
 * @file
 * Proud Panels plugin file.
 */

// Largely taken from http://precessionmedia.com/blog/creating-custom-panels-style-plugin-background-image-support
 
// Plugin definition
$plugin = array(
  // Title and description of the plugin
  'title' => t('Jumbotron'),
  'description' => t('Jumbotron.'),
  // Define a theme function for this plugin
  'render region' => 'jumbotron_style_render_region',
  // We'll be using a template for rendering
  'hook theme' => array(
    'jumbotron_style' => array(
      'variables' => array(
        'content' => NULL,
        'style_attributes' => array(),
        'wrapper_attributes' => array(),
      ),
      'path' => drupal_get_path('module', 'proud_panels') . '/plugins/styles/templates',
      'template' => 'jumbotron',
    ),
  ),
  // This defines the settings form for the plugin
  'settings form' => 'jumbotron_style_settings_form',
);


/**
 * Settings form callback.
 */
function jumbotron_style_settings_form($form, $form_state) {
  $form['inverse'] = array(
    '#type' => 'radios',
    '#title' => t('Style'),
    '#options' => array(
      '' => proud_panels_add_pattern_link('Default', 'jumbotron'),
      'jumbotron-inverse' => proud_panels_add_pattern_link('Inverse', 'jumbotron'),
    ),
    '#default_value' => (isset($form['inverse'])) ? $form['inverse'] : '',
  );
  
  $form['attributes'] = array(
    '#title' => t('Attributes'),
  ) + _proud_panels_wrapper_attribute_options($form['attributes']);

  return $form;
}


/**
 * Render callback.
 */
function theme_jumbotron_style_render_region($vars) {
  $settings = $vars['settings'];

  $style_attributes = array('class' => array('jumbotron', $settings['inverse']));
  $wrapper_attributes = array();
  
  if (!empty($settings['full']) && $settings['full']) {
    $style_attributes['class'][] = 'full';
    $wrapper_attributes['class'][] = 'full-container';
  }

  // Add our classes to the attrubutes array, if any defined
  if ($settings['attributes']['class']) {
    $style_attributes['class'] += explode(' ', $settings['attributes']['class']);
  }
   
  $content = implode($vars['panes']);
 
  return theme('jumbotron_style', array(
      'content' => $content,
      'style_attributes' => $style_attributes,
      'wrapper_attributes' => $wrapper_attributes,
    )
  );
}