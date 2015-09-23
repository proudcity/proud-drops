<?php

/**
 * Set the standard $node settings
 */
function proud_core_content_settings($type, $enable = TRUE) {
  $vars = array();
  proud_core_panelizer_default_settings('node', $type, $enable);
  $vars["field_bundle_settings_node__$type"] = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
  );
  $vars["menu_options_$type"] = array();
  $vars["menu_parent_$type"] = 'main-menu:0';
  $vars["node_options_$type"] = array('status');
  $vars["node_preview_$type"] = FALSE; // @todo? change
  $vars["node_submitted_$type"] = FALSE;

  foreach ($vars as $key=>$value) {
    if ($enable) {
      variable_set($key, $value);
    }
    else {
      variable_del($key);
    }
  }
}


/**
 * Set the standard panelizer settings for an entity
 */
function proud_core_panelizer_default_settings($entity_type, $bundle, $enable = TRUE) {
  if ($enable) {
    variable_set("panelizer_defaults_${entity_type}_${bundle}", array (
      'status' => 1,
      'view modes' => 
      array (
        'page_manager' => 
        array (
          'status' => 1,
          'default' => 1,
          'choice' => 0,
        ),
        'default' => 
        array (
          'status' => 0,
          'default' => 0,
          'choice' => 0,
        ),
        'teaser' => 
        array (
          'status' => 0,
          'default' => 0,
          'choice' => 0,
        ),
        'live_results_search' => 
        array (
          'status' => 0,
          'default' => 0,
          'choice' => 0,
        ),
      ),
    ));
  }
  else {
    variable_del("panelizer_defaults_node_$type");
  }
}