<?php
/**
 * @file
 * Provides app info for Proud.
 */

/**
 * Implements hook_apps_app_info().
 */
function proud_faq_apps_app_info() {
  return array(
    'demo content description' => '',
    'demo content module' => 'proud_faq_content',
    'post install callback' => 'proud_faq_app_post_install',
  );
}


function proud_faq_app_post_install($status) {
  module_enable('proud_faq_display', 'proud_faq_categories');
}
