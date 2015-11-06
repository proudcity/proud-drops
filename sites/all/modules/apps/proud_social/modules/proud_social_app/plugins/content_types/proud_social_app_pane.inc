<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Social feed'),
  'description' => t('Dynamic social media feed'),
  'category' => t('Blocks'),
  'edit form' => 'proud_social_app_pane_edit_form',
  'render callback' => 'proud_social_app_render_pane',
  'defaults' => array(),
  'all contexts' => TRUE,
);


function proud_social_app_pane_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['widget_type'] = array(
    '#type' => 'radios',
    '#title' => t('Widget type'),
    '#description' => t('Choose between a social wall, and a timeline.'),
    '#default_value' => !empty($conf['page_display']) ? $conf['widget_type'] : 'wall',
    '#options' => array(
      'wall' => t('Social wall'),
      'timeline' => t('Timeline')
    )
  );

  $form['show_controls'] = array(
    '#type' => 'radios',
    '#title' => t('Show filters?'),
    '#description' => t('Show controls above the widget'),
    '#default_value' => !empty($conf['show_controls']) ? $conf['show_controls'] : 'true',
    '#options' => array(
      'false' => t('No'),
      'true' => t('Yes')
    )
  );

  $form['post_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Count'),
    '#description' => t('How many items to show'),
    '#default_value' => !empty($conf['post_count']) ? $conf['post_count'] : '20',
    '#size' => 3, 
  );

  return $form;
}

/**
 * Edit form submit function.
 */
function proud_social_app_pane_edit_form_submit($form, &$form_state) {
  $form_state['conf']['widget_type'] = $form_state['values']['widget_type'];
  $form_state['conf']['show_controls'] = $form_state['values']['show_controls'];
  $form_state['conf']['post_count'] = $form_state['values']['post_count'];
}