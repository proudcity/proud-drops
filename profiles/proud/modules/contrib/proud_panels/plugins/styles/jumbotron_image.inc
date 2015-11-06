<?php

/**
 * @file
 * Proud Panels plugin file.
 */

// Largely taken from http://precessionmedia.com/blog/creating-custom-panels-style-plugin-background-image-support
 
// Plugin definition
$plugin = array(
  // Title and description of the plugin
  'title' => t('Image Jumbotron'),
  'description' => t('Jumbotron with a background image.'),
  // Define a theme function for this plugin
  'render region' => 'jumbotron_image_style_render_region',
  // We'll be using a template for rendering
  'hook theme' => array(
    'jumbotron_image_style' => array(
      'variables' => array(
        'content' => NULL,
        'style_attributes' => array(),
        'wrapper_attributes' => array(),
      ),
      'path' => drupal_get_path('module', 'proud_panels') . '/plugins/styles/templates',
      'template' => 'jumbotron-image',
    ),
  ),
  // This defines the settings form for the plugin
  'settings form' => 'jumbotron_image_style_settings_form',
);


/**
 * Settings form callback.
 */
function jumbotron_image_style_settings_form($form, $form_state) {

  $form['full'] = array(
    '#type' => 'checkbox',
    '#title' => proud_panels_add_pattern_link('Full height', 'jumbotron-image-full'),
    '#description' => t('Make the image fit most of the height of the screen.  This is nice for landing pages.'),
    '#default_value' => (isset($form['full'])) ? $form['full'] : FALSE,
  );
  $form['inverse'] = array(
    '#type' => 'radios',
    '#title' => t('Style'),
    '#description' => t('Make the image fit most of the height of the screen'),
    '#options' => array(
      '' => proud_panels_add_pattern_link('Default', 'jumbotron'),
      'jumbotron-inverse' => proud_panels_add_pattern_link('Inverse', 'jumbotron'),
    ),
    '#default_value' => (isset($form['inverse'])) ? $form['inverse'] : '',
  );
  
  $form['advanced'] = array(
    '#title' => t('Advanced'),
  ) + _proud_panels_wrapper_attribute_options($form['advanced']);
  $form['advanced']['image'] = array(
    '#type' => 'textfield',
    '#title' => t('Image field'),
    '#description' => t('Enter the image field for the background image. You may use substitutions in this field. E.g. for the default image field attached to articles use "%node:field_image"'),
    '#required' => TRUE,
    '#default_value' => (isset($form['advanced']['image'])) ? $form['advanced']['image'] : '%node:field_media',
    '#weight' => -1,
  );
  $form['advanced']['image_style'] = array(
    '#type' => 'select',
    '#title' => t('Image Style'),
    '#description' => t('Choose the appropriate image style for the background image.'),
    '#options' => image_style_options(),
    '#default_value' => (isset($form['advanced']['image_style'])) ? $form['advanced']['image_style'] : '',
    '#weight' => -1,
  );

  return $form;
}


/**
 * Render callback.
 */
function theme_jumbotron_image_style_render_region($vars) {
  $settings = $vars['settings'];
  $image_url = NULL;
 
  // Get the absolute path of the original image from the context substitution
  $image_abs_path = ctools_context_keyword_substitute($settings['advanced']['image'], array(), $vars['display']->context);
 
  $image_style = $settings['advanced']['image_style'];
 
  if ($image_style == '') {
    // If no image style is selected, use the original image.
    $image_url = $image_abs_path;
  } else {
    // Image style is provided in the settings form.
    // We need to get the original image uri to return the URL for an image derivative.
    global $base_url;
    $files_rel_path = variable_get('file_public_path', conf_path() . '/files');
    $image_rel_path = str_replace($base_url . '/' . $files_rel_path, '', $image_abs_path);
    $image_uri = file_build_uri($image_rel_path);
 
    $image_style_url = image_style_url($image_style, $image_uri);
 
    $image_url = $image_style_url;
  }
 
  $style_attributes = array('class' => array('jumbotron', $settings['inverse']));
  $wrapper_attributes = array();
  $style_attributes['style'] = 'background-image: url(' . $image_url . ');';
  
  if ($settings['full']) {
    $style_attributes['class'][] = 'full';
    $wrapper_attributes['class'][] = 'full-container';
  }

  // Add our classes to the attrubutes array, if any defined
  if ($settings['advanced']['class']) {
    $style_attributes['class'] += explode(' ', $settings['advanced']['class']);
  }
   
  $content = implode($vars['panes']);
 
  return theme('jumbotron_image_style', array(
      'content' => $content,
      'style_attributes' => $style_attributes,
      'wrapper_attributes' => $wrapper_attributes,
    )
  );
}