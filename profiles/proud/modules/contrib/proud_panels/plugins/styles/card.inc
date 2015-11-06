<?php

/**
 * @file
 * Proud Panels plugin file.
 */

// Largely taken from http://precessionmedia.com/blog/creating-custom-panels-style-plugin-background-image-support
 
// Plugin definition
$plugin = array(
  // Title and description of the plugin
  'title' => t('Card content'),
  'description' => t('Bootstrap Card.'),
  // Define a theme function for this plugin
  'render region' => 'card_style_render_region',
  // We'll be using a template for rendering
  'hook theme' => array(
    'card_style' => array(
      'variables' => array(
        'content' => NULL,
        'style_attributes' => array(),
        'wrapper_attributes' => array(),
      ),
      'path' => drupal_get_path('module', 'proud_panels') . '/plugins/styles/templates',
      'template' => 'card',
    ),
  ),
  // This defines the settings form for the plugin
  'settings form' => 'card_style_settings_form',
);


/**
 * Settings form callback.
 */
function card_style_settings_form($form, $form_state) {
  $form['inverse'] = array(
    '#type' => 'radios',
    '#title' => t('Style'),
    '#description' => t('Make the card'),
    '#options' => array(
      '' => proud_panels_add_pattern_link('Default', 'card'),
      'card-inverse' => proud_panels_add_pattern_link('Inverse', 'card'),
    ),
    '#default_value' => (isset($form['inverse'])) ? $form['inverse'] : '',
  );

  $form['card_img_overlay'] = array(
    '#type' => 'checkbox',
    '#title' => proud_panels_add_pattern_link('Overlay text on image', 'card-overlay'),
    //'#value' => 'card-img-overlay',
    '#default_value' => (isset($form['card_img_overlay'])) ? $form['card_img_overlay'] : '',
  );

  $form['card_block'] = array(
    '#type' => 'checkbox',
    '#title' => t('Add card block padding'),
    '#description' => t('Useful if you are not using the card panel layout.'),
    //'#value' => 'card-block',
    '#default_value' => (isset($form['card_block'])) ? $form['card_block'] : 'card-block',
  );

  //@todo: add card-primary, card-secondary, etc
  
  $form['attributes'] = array(
    '#title' => t('Attributes'),
  ) + _proud_panels_wrapper_attribute_options($form['attributes']);

  return $form;
}


/**
 * Render callback.
 */
function theme_card_style_render_region($vars) {
  $settings = $vars['settings'];

  $style_attributes = array('class' => array('card', $settings['inverse']));

  if ($settings['card_img_overlay']) {
    $style_attributes['style'][] = 'card-img-overlay';
  }

  if ($settings['card_block']) {
    $style_attributes['style'][] = 'card-block';
  }

  // Add our classes to the attrubutes array, if any defined
  if ($settings['attributes']['class']) {
    $style_attributes['class'] += explode(' ', $settings['attributes']['class']);
  }
   
  $content = implode($vars['panes']);

  return theme('card_style', array(
      'content' => $content,
      'style_attributes' => $style_attributes,
    )
  );
}