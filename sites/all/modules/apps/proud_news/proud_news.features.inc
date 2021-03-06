<?php
/**
 * @file
 * proud_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function proud_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function proud_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function proud_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News article'),
      'base' => 'node_content',
      'description' => t('Use <em>News articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
