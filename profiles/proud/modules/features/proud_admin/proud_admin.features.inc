<?php
/**
 * @file
 * proud_admin.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function proud_admin_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
}
