<?php
/**
 * @file
 * proud_event_register.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function proud_event_register_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "ds_extras" && $api == "ds_extras") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function proud_event_register_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_registration_state().
 */
function proud_event_register_default_registration_state() {
  $items = array();
  $items['canceled'] = entity_import('registration_state', '{
    "name" : "canceled",
    "label" : "Canceled",
    "description" : "Registration was cancelled",
    "default_state" : "0",
    "active" : "0",
    "held" : "0",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  $items['complete'] = entity_import('registration_state', '{
    "name" : "complete",
    "label" : "Complete",
    "description" : "Registration has been completed.",
    "default_state" : "1",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  $items['pending'] = entity_import('registration_state', '{
    "name" : "pending",
    "label" : "Pending",
    "description" : "Registration is pending.",
    "default_state" : "0",
    "active" : "0",
    "held" : "0",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function proud_event_register_default_registration_type() {
  $items = array();
  $items['call_to_register'] = entity_import('registration_type', '{
    "name" : "call_to_register",
    "label" : "Call to register",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  $items['default'] = entity_import('registration_type', '{
    "name" : "default",
    "label" : "Online Registrations",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
