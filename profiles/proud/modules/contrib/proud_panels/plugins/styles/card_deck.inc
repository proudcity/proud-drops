<?php

/**
 * @file
 * Proud Panels plugin file.
 */

// Largely taken from http://precessionmedia.com/blog/creating-custom-panels-style-plugin-background-image-support
 
// Plugin definition
$plugin = array(
  // Title and description of the plugin
  'title' => t('Card deck'),
  'description' => t('Bootstrap card deck.'),
  // Define a theme function for this plugin
  'render region' => 'theme_card_deck_style_render_region',
  // We'll be using a template for rendering
  'hook theme' => array(
    'card_deck_style' => array(
      'variables' => array(
        'content' => NULL,
        'style_attributes' => array(),
        'wrapper_attributes' => array(),
      ),
      'path' => drupal_get_path('module', 'proud_panels') . '/plugins/styles/templates',
      'template' => 'card-deck',
    ),
  ),
  // This defines the settings form for the plugin
  'settings form' => 'card_deck_style_settings_form',
);


/**
 * Settings form callback.
 */
function card_deck_style_settings_form($form, $form_state) {
  $form['style'] = array(
    '#type' => 'radios',
    '#title' => t('Style'),
    '#description' => t('Make the card'),
    '#options' => array(
      'card-deck' => proud_panels_add_pattern_link('Default', 'card'),
      'card-group' => proud_panels_add_pattern_link('Inverse', 'card'),
    ),
    '#default_value' => (isset($form['style'])) ? $form['style'] : '',
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
function theme_card_deck_style_render_region($vars) {
  $settings = $vars['settings'];

  dpm($settings);

  $style_attributes = array('class' => array('card', $settings['style']));
  $wrapper_attributes = array();

  if (!empty($settings['style']) && $settings['style'] == 'card-deck') {
    $wrapper_attributes['class'][] = 'card-deck-wrapper';
  }

  if($settings['equalize']) {
    $style_attributes['class'][] = 'card-columns-equalize';
  }
  
  // Add our classes to the attrubutes array, if any defined
  if ($settings['attributes']['class']) {
    $style_attributes['class'] += explode(' ', $settings['attributes']['class']);
  }
   
  $content = implode($vars['panes']);
 
  return theme('card_deck_style', array(
      'content' => $content,
      'style_attributes' => $style_attributes,
      'wrapper_attributes' => $wrapper_attributes,
    )
  );
}