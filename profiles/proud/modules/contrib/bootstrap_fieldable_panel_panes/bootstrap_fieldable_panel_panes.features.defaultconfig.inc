<?php
/**
 * @file
 * bootstrap_fieldable_panel_panes.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function bootstrap_fieldable_panel_panes_defaultconfig_features() {
  return array(
    'bootstrap_fieldable_panel_panes' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function bootstrap_fieldable_panel_panes_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer fieldable_panels_pane bootstrap_accordion breadcrumbs'.
  $permissions['administer panelizer fieldable_panels_pane bootstrap_accordion breadcrumbs'] = array(
    'name' => 'administer panelizer fieldable_panels_pane bootstrap_accordion breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane bootstrap_accordion content'.
  $permissions['administer panelizer fieldable_panels_pane bootstrap_accordion content'] = array(
    'name' => 'administer panelizer fieldable_panels_pane bootstrap_accordion content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane bootstrap_accordion context'.
  $permissions['administer panelizer fieldable_panels_pane bootstrap_accordion context'] = array(
    'name' => 'administer panelizer fieldable_panels_pane bootstrap_accordion context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane bootstrap_accordion defaults'.
  $permissions['administer panelizer fieldable_panels_pane bootstrap_accordion defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane bootstrap_accordion defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane bootstrap_accordion layout'.
  $permissions['administer panelizer fieldable_panels_pane bootstrap_accordion layout'] = array(
    'name' => 'administer panelizer fieldable_panels_pane bootstrap_accordion layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane bootstrap_accordion overview'.
  $permissions['administer panelizer fieldable_panels_pane bootstrap_accordion overview'] = array(
    'name' => 'administer panelizer fieldable_panels_pane bootstrap_accordion overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane bootstrap_accordion settings'.
  $permissions['administer panelizer fieldable_panels_pane bootstrap_accordion settings'] = array(
    'name' => 'administer panelizer fieldable_panels_pane bootstrap_accordion settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane bootstrap_tabs breadcrumbs'.
  $permissions['administer panelizer fieldable_panels_pane bootstrap_tabs breadcrumbs'] = array(
    'name' => 'administer panelizer fieldable_panels_pane bootstrap_tabs breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane bootstrap_tabs content'.
  $permissions['administer panelizer fieldable_panels_pane bootstrap_tabs content'] = array(
    'name' => 'administer panelizer fieldable_panels_pane bootstrap_tabs content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane bootstrap_tabs context'.
  $permissions['administer panelizer fieldable_panels_pane bootstrap_tabs context'] = array(
    'name' => 'administer panelizer fieldable_panels_pane bootstrap_tabs context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane bootstrap_tabs defaults'.
  $permissions['administer panelizer fieldable_panels_pane bootstrap_tabs defaults'] = array(
    'name' => 'administer panelizer fieldable_panels_pane bootstrap_tabs defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane bootstrap_tabs layout'.
  $permissions['administer panelizer fieldable_panels_pane bootstrap_tabs layout'] = array(
    'name' => 'administer panelizer fieldable_panels_pane bootstrap_tabs layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane bootstrap_tabs overview'.
  $permissions['administer panelizer fieldable_panels_pane bootstrap_tabs overview'] = array(
    'name' => 'administer panelizer fieldable_panels_pane bootstrap_tabs overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer fieldable_panels_pane bootstrap_tabs settings'.
  $permissions['administer panelizer fieldable_panels_pane bootstrap_tabs settings'] = array(
    'name' => 'administer panelizer fieldable_panels_pane bootstrap_tabs settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create fieldable bootstrap_accordion'.
  $permissions['create fieldable bootstrap_accordion'] = array(
    'name' => 'create fieldable bootstrap_accordion',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable bootstrap_tabs'.
  $permissions['create fieldable bootstrap_tabs'] = array(
    'name' => 'create fieldable bootstrap_tabs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable bootstrap_accordion'.
  $permissions['delete fieldable bootstrap_accordion'] = array(
    'name' => 'delete fieldable bootstrap_accordion',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable bootstrap_tabs'.
  $permissions['delete fieldable bootstrap_tabs'] = array(
    'name' => 'delete fieldable bootstrap_tabs',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable bootstrap_accordion'.
  $permissions['edit fieldable bootstrap_accordion'] = array(
    'name' => 'edit fieldable bootstrap_accordion',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable bootstrap_tabs'.
  $permissions['edit fieldable bootstrap_tabs'] = array(
    'name' => 'edit fieldable bootstrap_tabs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
