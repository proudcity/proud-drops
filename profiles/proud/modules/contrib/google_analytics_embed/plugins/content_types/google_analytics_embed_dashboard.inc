<?php


$plugin = array(
  'single' => TRUE,  // Just do this one, it is needed.
  'title' => t('Google Analytics Dashboard'),
  'description' => t('A large overview of key Google Analytics data'),
  'category' => t('Widgets'),
  'edit form' => 'google_analytics_embed_dashboard_edit_form', // A function that will return the settings form for the pane.
  'render callback' => 'google_analytics_embed_dashboard_render', // A function that will return the renderable content.
  //'admin info' => 'google_analytics_embed_dashboard_admin_info', // A function that will return the information displayed on the admin screen (optional).
  'defaults' => array( // Array of defaults for the settings form.
    'text' => '',
  ),
  'all contexts' => TRUE, // This is NEEDED to be able to use substitution strings in your pane.
);


/**
 * An edit form for the pane's settings.
 */
function google_analytics_embed_dashboard_edit_form($form, &$form_state) {
  /*$conf = $form_state['conf'];

  $form['text'] = array(
    '#type' => 'textfield',
    '#title' => t('Panel Text'),
    '#description' => t('Text to display, it may use substitution strings'),
    '#default_value' => $conf['text'],
  );
*/
  return $form;
}

/**
 * Submit function, note anything in the formstate[conf] automatically gets saved
 * Notice, the magic that automatically does that for you.
 */
function google_analytics_embed_dashboard_edit_form_submit(&$form, &$form_state) {
  /*foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }*/
}

/**
 * Run-time rendering of the body of the block (content type)
 * See ctools_plugin_examples for more advanced info
 */
function google_analytics_embed_dashboard_render($subtype, $conf, $args, $contexts) {
  $block = new stdClass();
  $block->title = '';
  $block->content = theme('google_analytics_embed_dashboard', array()); 
  return $block;
}

/**
 * 'admin info' callback for panel pane.
 */
/*function google_analytics_embed_dashboard_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = $conf['text'];
    return $block;
  }
}*/

