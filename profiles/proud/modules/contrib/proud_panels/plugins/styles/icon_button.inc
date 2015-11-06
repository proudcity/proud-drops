<?php

/**
 * @file
 * Proud Panels plugin file.
 */

// Largely taken from http://precessionmedia.com/blog/creating-custom-panels-style-plugin-background-image-support
 
// Plugin definition
$plugin = array(
  // Title and description of the plugin
  'title' => t('Icon button'),
  'description' => t('A buttion with a big icon'),
  // Define a theme function for this plugin
  'render region' => 'icon_button_style_render_region',
  // We'll be using a template for rendering
  'hook theme' => array(
    'icon_button_style' => array(
      'variables' => array(
        'content' => NULL,
        'link' => NULL,
        'icon' => NULL,
        'title' => '',
        'style_attributes' => array(),
        'wrapper_attributes' => array(),
      ),
      'path' => drupal_get_path('module', 'proud_panels') . '/plugins/styles/templates',
      'template' => 'icon-button',
    ),
  ),
  // This defines the settings form for the plugin
  //'settings form' => 'icon_button_style_settings_form',
);


/**
 * Settings form callback.
 */
function icon_button_style_settings_form($form, $form_state) {
 
  $form['advanced'] = array(
    '#title' => t('Advanced'),
  ) + _proud_panels_wrapper_attribute_options($form['advanced']);
  $form['advanced']['image'] = array(
    '#type' => 'textfield',
    '#title' => t('Link field'),
    '#description' => t('Enter the link field to use "%field_collection_item:field_btn_link"'),
    '#required' => TRUE,
    '#default_value' => (isset($form['advanced']['image'])) ? $form['advanced']['image'] : '%field_collection_item:field_btn_link',
    '#weight' => -1,
  );

  return $form;
}


/**
 * Render callback.
 */
function theme_icon_button_style_render_region($vars) {
  $settings = $vars['settings'];
  $image_url = NULL;
 
  // Get the absolute path of the original image from the context substitution
  // @todo: add support for ctools_context_keyword_substitute()
  // Requires https://www.drupal.org/files/issues/2018329-18-FPP_Context_substitutions.patch?
  //$link = ctools_context_keyword_substitute('%fieldable_panels_pane:field_btn_link', array(), $vars['display']->context);
  $link = url($vars['display']->context['panelizer']->data->field_btn_link[LANGUAGE_NONE][0]['url']);
  $icon = !empty($vars['display']->context['panelizer']->data->field_btn_icon) ? $vars['display']->context['panelizer']->data->field_btn_icon[LANGUAGE_NONE][0]['icon'] : NULL;
  $title = ctools_context_keyword_substitute('%fieldable_panels_pane', array(), $vars['display']->context);
  


  // Add our classes to the attrubutes array, if any defined
  if ($settings['advanced']['class']) {
    $style_attributes['class'] += explode(' ', $settings['advanced']['class']);
  }
  
  $content = implode($vars['panes']);
 
  return theme('icon_button_style', array(
      'content' => $content,
      'icon' => $icon,
      'link' => $link,
      'title' => $title,
      //'style_attributes' => $style_attributes,
      //'wrapper_attributes' => $wrapper_attributes,
    )
  );
}