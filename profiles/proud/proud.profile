<?php
/**
 * @file
 * Install profile for Soar.
 */


// Allow the Install from DB option
//include_once 'install_from_db/install_from_db.profile';


/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
//if (!function_exists("system_form_install_configure_form_alter")) {
//  function system_form_install_configure_form_alter(&$form, $form_state) {
//    $form['site_information']['site_name']['#default_value'] = 'Proud';
//  }
//}

/**
 * Implements hook_form_alter().
 *
 * Select the current install profile by default.
 */
//if (!function_exists("system_form_install_select_profile_form_alter")) {
//  function system_form_install_select_profile_form_alter(&$form, $form_state) {
//    foreach ($form['profile'] as $key => $element) {
//      $form['profile'][$key]['#value'] = 'proud';
//    }
//  }
//}

/**
 * Implements hook_appstore_stores_info().
 */
function proud_apps_servers_info() {
 //$info =  drupal_parse_info_file(dirname(__file__) . '/openatrium.info');
 return array(
   'proud' => array(
     'title' => 'Proud',
     'description' => "Apps for the Proud distribution",
     // @CHANGE this to -stable for stable releases.
     'manifest' => 'http://apps.albatrossdigital.com/app/query/helm',
     'profile' => 'proud',
     'profile_version' => isset($info['version']) ? $info['version'] : '7.x-1.x-dev',
     'server_name' => !empty($_SERVER['SERVER_NAME']) ? $_SERVER['SERVER_NAME'] : '',
     'server_ip' => !empty($_SERVER['SERVER_ADDR']) ? $_SERVER['SERVER_ADDR'] : '',
   ),
 );
}


/**
 * Implements hook_form_FORM_ID_alter() for panopoly_theme_selection_form.
 */
// @todo
/*
function openatrium_form_panopoly_theme_selection_form_alter(&$form, &$form_state, $form_id) {
  // Change the default theme in the selection form.
  unset($form['theme_wrapper']['theme']['#options']['radix']);
  unset($form['theme_wrapper']['theme']['#options']['radix_starter']);
  $form['theme_wrapper']['theme']['#default_value'] = 'oa_radix';
}
*/
