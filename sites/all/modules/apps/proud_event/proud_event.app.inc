<?php
/**
 * @file
 * Provides app info for Proud.
 */

/**
 * Implements hook_apps_app_info().
 */
function proud_event_apps_app_info() {
  return array(
    'demo content description' => '',
    'demo content module' => 'proud_event_content',
    'post install callback' => 'proud_event_app_post_install',
  );
}


function proud_event_app_post_install($status) {
  module_enable('proud_event_display', 'proud_event_categories');
}
