<?php
/**
 * @file
 * proud_landingpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function proud_landingpage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function proud_landingpage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function proud_landingpage_node_info() {
  $items = array(
    'landingpage' => array(
      'name' => t('Landing Page'),
      'base' => 'node_content',
      'description' => t('A landing page lists all submenu items.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
