<?php

/**
 * Install related display module when base module is enabled.
 */
function proud_core_add_permissions($permissions, $module = NULL) {
  $roles = array();
  if (empty($module)) {
    $modules = user_permission_get_modules();
  }
  foreach ($permissions as $permission) {
    foreach ($permission['roles'] as $role) {
      if (empty($roles[$role])) {
        $roles[$role] = user_role_load_by_name($role);
      }
      if (
        !empty($roles[$role]->rid) &&
        (empty($permission['module']) || module_exists($permission['module']))
      ){
        
        // We can't use user_role_grant_permissions() because of issues with the $modules array not being set
        //$permission['module'] = !empty($permission['module']) ? $permission['module'] : 
        //  !empty($module) ? $module : $modules[$permission['name']];
        // Grant new permissions for the role.
        try {
          db_merge('role_permission')
            ->key(array(
              'rid' => $roles[$role]->rid,
              'permission' => $permission['name'],
            ))
            ->fields(array(
              'module' => $permission['module'],
            ))
            ->execute();
        } catch (Exception $e) {
          print 'PERMISSION ERROR: '.  print_r(array($permission),1) . "\n";
        }
        
      }
    }
  }
  drupal_static_reset('user_access');
  drupal_static_reset('user_role_permissions');
}


/**
 * Returns standard permissions for Proud distro.
 */
function proud_core_core_permissions($content_type) {
  $permissions = array(
    array(
      'name' => "access administration pages",
      'roles' => array('administrator', 'editor'),
      'module' => 'system'
    ),
    array(
      'name' => "administer site configuration",
      'roles' => array('administrator'),
      'module' => 'system'
    ),
    array(
      'name' => "view the administration theme",
      'roles' => array('authenticated user'),
      'module' => 'system'
    ),

    array(
      'name' => "access content",
      'roles' => array('anonymous user', 'authenticated user'),
      'module' => 'node'
    ),
    array(
      'name' => "access content overview",
      'roles' => array('authenticated user'),
      'module' => 'node'
    ),
    array(
      'name' => "view own unpublished content",
      'roles' => array('authenticated user'),
      'module' => 'node'
    ),
    array(
      'name' => "view revisions",
      'roles' => array('administrator', 'editor'),
      'module' => 'node'
    ),
    array(
      'name' => "revert revisions",
      'roles' => array('administrator'),
      'module' => 'node'
    ),
    array(
      'name' => "delete revisions",
      'roles' => array('administrator'),
      'module' => 'node'
    ),

    array(
      'name' => "administer taxonomy",
      'roles' => array('administrator'),
      'module' => 'taxonomy'
    ),

    array(
      'name' => "access user profiles",
      'roles' => array('administrator'),
      'module' => 'user'
    ),
    array(
      'name' => "administer users",
      'roles' => array('administrator'),
      'module' => 'user'
    ),
    array(
      'name' => "administer permissions",
      'roles' => array('administrator'),
      'module' => 'user'
    ),
    array(
      'name' => "cancel account",
      'roles' => array('administrator'),
      'module' => 'user'
    ),
    array(
      'name' => "select account cancellation method",
      'roles' => array('administrator'),
      'module' => 'user'
    ),
    array(
      'name' => "change own username",
      'roles' => array('authenticated user'),
      'module' => 'user'
    ),

    array(
      'name' => "administer menu",
      'roles' => array('administrator'),
      'module' => 'menu'
    ),

    array(
      'name' => "access contextual links",
      'roles' => array('administrator'),
      'module' => 'contextual'
    ),

    array(
      'name' => "create url aliases",
      'roles' => array('administrator', 'editor'),
      'module' => 'path'
    ),
    array(
      'name' => "administer url aliases",
      'roles' => array('administrator'),
      'module' => 'path'
    ),

    array(
      'name' => "use gravatar",
      'roles' => array('authenticated user'),
      'module' => 'path'
    ),
  );


  // Contrib modules that might not always be enabled
  
  if(module_exists('metatag')) {
    $permissions[] = array(
      'name' => "administer meta tags",
      'roles' => array(),
      'module' => 'metatag'
    );
    $permissions[] = array(
      'name' => "edit meta tags",
      'roles' => array('administrator'),
      'module' => 'metatag'
    );
  }

  if(module_exists('redirect')) {
    $permissions[] = array(
      'name' => "administer redirects",
      'roles' => array('administrator'),
      'module' => 'redirect'
    );
  }

  if(module_exists('apps')) {
    $permissions[] = array(
      'name' => "administer apps",
      'roles' => array('administrator'),
      'module' => 'apps'
    );
  }

  return $permissions;
}


/**
 * Returns standard permissions for a content type.
 */
function proud_core_content_permissions($content_type, $module = NULL) {
  return array(
    array(
      'name' => "create $content_type content",
      'roles' => array('administrator', 'editor'),
      'module' => $module
    ),
    array(
      'name' => "delete any $content_type content",
      'roles' => array('administrator'),
      'module' => $module
    ),
    array(
      'name' => "delete own $content_type content",
      'roles' => array('editor'),
      'module' => $module
    ),
    // @todo: is this correct?
    array(
      'name' => "edit any $content_type content",
      'roles' => array('administrator', 'editor'),
      'module' => $module
    ),
    array(
      'name' => "edit own $content_type content",
      'roles' => array('administrator', 'editor'),
      'module' => $module
    ),
  );
}

/**
 * Returns standard panelizer permissions for a content type.
 */
function proud_core_panelizer_permissions($content_type, $module = NULL) {
  if (!module_exists('panelizer')) {
    return array();
  }

  return array(
    array(
      'name' => "administer panelizer node $content_type content",
      'roles' => array('administrator'),
      'module' => $module
    ),
    array(
      'name' => "administer panelizer node $content_type context",
      'roles' => array('administrator'),
      'module' => $module
    ),
    array(
      'name' => "administer panelizer node $content_type defaults",
      'roles' => array(),
      'module' => $module
    ),
    array(
      'name' => "administer panelizer node $content_type layout",
      'roles' => array('administrator'),
      'module' => $module
    ),
    array(
      'name' => "administer panelizer node $content_type overview",
      'roles' => array(),
      'module' => $module
    ),
    array(
      'name' => "administer panelizer node $content_type settings",
      'roles' => array(),
      'module' => $module
    ),
  );
}



/**
 * Returns standard file permissions for a entity bundle.
 */
function proud_core_file_permissions($bundle, $module = NULL) {
  $module = 'file_entity';
  return array(
    array(
      'name' => "edit own $bundle files",
      'roles' => array('authenticated user'),
      'module' => $module
    ),
    array(
      'name' => "edit any $bundle files",
      'roles' => array('administrator'),
      'module' => $module
    ),
    array(
      'name' => "delete own $bundle files",
      'roles' => array('administrator'),
      'module' => $module
    ),
    array(
      'name' => "delete any $bundle files",
      'roles' => array('administrator'),
      'module' => $module
    ),
    array(
      'name' => "download own $bundle files",
      'roles' => array('authenticated user'),
      'module' => $module
    ),
    array(
      'name' => "download any $bundle files",
      'roles' => array('administrator', 'editor'),
      'module' => $module
    ),
  );
}


/**
 * Returns standard fieldable panel pane permissions for a entity bundle.
 */
function proud_core_fpp_permissions($bundle) {
  //if (!module_exists('panelizer')) {
  //  return array();
  //}
  $module = 'fieldable_panels_panes';
  return array(
    array(
      'name' => "create fieldable $bundle",
      'roles' => array('administrator'),
      'module' => $module
    ),
    array(
      'name' => "edit fieldable $bundle",
      'roles' => array('administrator'),
      'module' => $module
    ),
  );
}

