<?php
/**
 * @file
 * bootstrap_fieldable_panel_panes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bootstrap_fieldable_panel_panes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bootstrap_fieldable_panel_panes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
