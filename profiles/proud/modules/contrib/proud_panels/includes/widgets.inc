<?php

/**
 * @file
 * Panels hacks mostly from panopoly_widgets
 */

/**
 * The default list of allowed file extensions in file widgets.
 */
define('proud_panels_FILE_EXTENSIONS_DEFAULT', 'txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp');

/**
 * Configuration Form for Proud Magic
 */
function proud_panels_configure_form($form, &$form_state) {
  $form = array();

  $file_extensions = variable_get('proud_panels_file_extensions', proud_panels_FILE_EXTENSIONS_DEFAULT);
  $file_extensions = str_replace(' ', ', ', $file_extensions);
  $form['proud_panels_file_extensions'] = array(
    '#title' => t('Allowed file extensions in file widgets.'),
    '#type' => 'textfield',
    '#default_value' => $file_extensions,
    '#element_validate' => array('_file_generic_settings_extensions'),
    '#description' => t('Separate extensions with a space or comma and do not include the leading dot.'),
  );

  $form = system_settings_form($form);
  $form['#submit'][] = 'proud_panels_configure_form_submit';
  return $form;
}

/**
 * Form submissions callback for proud_panels_configure_form().
 */
function proud_panels_configure_form_submit($form, &$form_state) {
  if ($file_instance = field_info_instance('fieldable_panels_pane', 'field_basic_file_file', 'basic_file')) {
    $file_extensions = $form_state['values']['proud_panels_file_extensions'];
    $file_instance['settings']['file_extensions'] = $file_extensions;
    field_update_instance($file_instance);
  }
}

/** 
 * Implements hook_field_default_field_instances_alter().
 */
function proud_panels_field_default_field_instances_alter(&$instances) {
  if (isset($instances['fieldable_panels_pane-basic_file-field_basic_file_file'])) {
    $file_extensions = variable_get('proud_panels_file_extensions', proud_panels_FILE_EXTENSIONS_DEFAULT);
    $instances['fieldable_panels_pane-basic_file-field_basic_file_file']['settings']['file_extensions'] = $file_extensions;
  }
}



/**
 * Implementation of hook_ctools_content_subtype_alter()
 */
// @todo: do we want this???
/*
function proud_panels_ctools_content_subtype_alter(&$subtype, &$plugin) {

  // Modify the menu block plugin to better fit into our UI
  if ($plugin['module'] == 'menu_block' && $subtype['menu_title'] == 'Main menu') {
    $subtype['category'][0] = t('Custom');
    $subtype['top level'] = TRUE;
    $subtype['title'] = t('Submenu');
    $subtype['icon'] = drupal_get_path('module', 'proud_panels') . '/images/icon_submenu.png';
    $subtype['admin css'] = array(drupal_get_path('module', 'menu_block') . '/menu-block-admin.css');
    $subtype['admin js'] = array(drupal_get_path('module', 'menu_block') . '/menu-block.js');
  }

  // Modify the general content item to appear in the generic content sidebar area
  if ($plugin['module'] == 'views_content' && $subtype['title'] == 'Piece of Content') {
    $subtype['category'][0] = t('Custom');
    $subtype['top level'] = TRUE;
    $subtype['title'] = t('Content item');
    $subtype['icon'] = drupal_get_path('module', 'proud_panels') . '/images/icon_content_item.png';
  }

  // Modify the general content listing to appear in the generic content sidebar area
  if ($plugin['module'] == 'views_content' && $subtype['title'] == 'List of Content') {
    $subtype['category'][0] = t('Custom');
    $subtype['top level'] = TRUE;
    $subtype['title'] = t('Content list');
    $subtype['icon'] = drupal_get_path('module', 'proud_panels') . '/images/icon_content_list.png';
  }

  // Modify the plugins so we do away with this "node" and "entity" thing
  if ($subtype['category'] == 'Node' || $subtype['category'] == 'Entity') {
    $subtype['category'] = t('Page Content');
  }
  if ($subtype['category'] == 'User') {
    $subtype['category'] = t('User Content');
  }
  if ($subtype['category'] == 'Taxonomy_term' || $subtype['category'] == 'Taxonomy term') {
    $subtype['category'] = t('Category Content');
  }

  // Modify the plugins so we have consistent language around "form" content
  if ($subtype['category'] == 'Form') {
    $subtype['category'] = t('Form Content');
  }
}
*/


/**
 * Implementation of hook_form_alter()
 */
function _proud_panels_form_alter(&$form, &$form_state, $form_id) {

  // Simplify the menu block edit form
  if ($form_id == 'menu_block_menu_tree_content_type_edit_form') {
    $form['admin_title']['#access'] = FALSE;
    $form['depth']['#access'] = FALSE;
    $form['display_options']['#default_value'] = 'advanced';
    $form['display_options']['#access'] = FALSE;
    $form['title_link']['#access'] = FALSE;
    $form['buttons']['#prefix'] = '<div class="menu-block-ctools-buttons">';

    // Disable some options since they appear busted or confusing in Menu Block
    $form['sort']['#access'] = FALSE;
  }

  // Get rid of the "make title a link" option for FPP,
  // as it doesn't seem to play nice
  if(
    $form_id == 'fieldable_panels_panes_entity_edit_form' || 
    $form_id == 'fieldable_panels_panes_fieldable_panels_pane_content_type_edit_form'
  ) {
    $form['link']['#access'] = false;
    $form['link']['link']['#default_value'] = 0;
    $form['link']['link']['#value'] = 0;
  }

  if ($form_id == 'fieldable_panels_panes_fieldable_panels_pane_content_type_edit_form') {
    // fields to the FPP object if we are adding a reusable object for the first time
    if ($form_state['entity']->reusable && $form_state['op'] == 'add' && $form_state['rebuild'] == FALSE) {
      $form = fieldable_panels_panes_entity_edit_form($form, $form_state);
    }

    // a custom pre-render method to deal with "Content Settings" fieldset.
    //$form['#pre_render'][] = 'proud_panels_fieldable_panel_pane_pre_render';
    
    // Remove the revisioning information
    $form['revision']['revision']['#type'] = 'value';
    $form['revision']['log']['#access'] = FALSE;

    // Remove the revisioning information
    $form['revision']['revision']['#type'] = 'value';
    $form['revision']['#access'] = FALSE;

    // Hide the View Mode field
    $form['view_mode']['#access'] = FALSE;

    // Hide the Redirect field
    $form['redirect']['#access'] = FALSE;

    
    /*
    // a widget setting
    $form['widget_settings']['#type'] = 'fieldset';
    $form['widget_settings']['#title'] = t('General Settings');
    $form['title']['#attributes']['placeholder'] = $form['title']['#title'];
    $form['title']['#title_display'] = 'invisible';
    $form['widget_settings']['title'] = $form['title'];
    unset($form['title']);

    // Move the link field into the general settings tab.
    $form['widget_settings']['link'] = $form['link'];
    unset($form['link']);
    */


    // Improve the reusable interface
    unset($form['reusable']['#title']); // = t('Reusable Settings');
    $form['reusable']['#type'] = 'fieldset';
    $form['reusable']['#process'] = array('ctools_dependent_process');
    $form['reusable']['#id'] = 'reusable-settings';
    $form['reusable']['category']['#value'] = t('Reusable Content');
    $form['reusable']['category']['#type'] = 'value';
    $form['reusable']['admin_description']['#access'] = FALSE;

    // Set the proper dependencies for the reusable markup
    $form['reusable']['warning']['#dependency'] = array('edit-reusable' => array(1));
    $form['reusable']['warning']['#prefix'] = '<div id="reusable-wrapper">';
    $form['reusable']['warning']['#suffix'] = '</div>';
    $form['reusable']['warning']['#type'] = 'item';

    // Update the text for the reusable markup
    $form['reusable']['warning']['#markup'] = '<div class="description">' . t('Note: This item is reusable! Any changes made will be applied globally.') . '</div>';
  }
}

/**
 * Implement the "Content Settings" fieldset in a pre-render. This fixes issues with image caused by initially
 * doing this in a form_alter.
 *
 * @see http://drupal.org/node/1567704
 */
function proud_panels_fieldable_panel_pane_pre_render($element) {
  // a content settings fieldset.
  $element['content_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Content Settings'),
    '#weight' => 1,
  );

  // any remaining fields to the content settings fieldset.
  foreach ($element as $key => $value) {
    if (substr($key, 0, 6) == 'field_' || $key == 'body') {
      $element['content_settings'][$key] = $value;
      unset($element[$key]);
    }
  }

  return $element;
}

/**
 * Implementation of hook_field_display_ENTITY_TYPE_alter().
 *
 * Update the display settings with the option selected on the entity view mode field.
 */
function proud_panels_field_display_fieldable_panels_pane_alter(&$display, $context) {
  if ($context['field']['field_name'] == 'field_existing_content') {
    $view_mode = $context['entity']->field_view_mode[LANGUAGE_NONE][0]['value'];

    if (!empty($view_mode)) {
      $display['settings']['view_mode'] = $view_mode;
    }
  }
}

/**
 * Implementation of hook_file_default_displays_alter()
 */
function proud_panels_file_default_displays_alter(&$default_displays) {
  // Display the 'Generic file' display on video preview.
  if (!empty($default_displays['video__preview__file_field_file_default'])) {
    $default_displays['video__preview__file_field_file_default']->status = FALSE;
  }
}

/**
 * Implements hook_menu_block_tree_alter().
 *
 * Updates menu block settings in case of IPE callback magic. This will only
 * work in limited cases but will be fixed when the page refreshes.
 */
function proud_panels_menu_block_tree_alter($tree, $config) {
  if (arg(0) == 'panels' && arg(1) == 'ajax') {
    foreach ($tree as $key => $value) {
      $tree[$key]['link']['in_active_trail'] = TRUE;
    }
  }
}

/**
 * Rewrites the node title by poisening the node_load() static cache.
 *
 * We use this to support overriding the title of 'Content item' widgets.
 * Unfortunately, we can't hook into a spot between when the View loads the
 * entity and Panelizer renders it, so we have to use this hack.
 *
 * @param int $nid
 *   The NID of the node whose title we're going to rewrite.
 * @param string|NULL $title
 *   (optional) If a string is given, the this is the new title for the node.
 *   If NULL is given, return the title to its previous value.
 *
 * @see proud_panels_views_post_execute()
 * @see proud_panels_views_post_render()
 */
function _proud_panels_content_item_title_rewrite($nid, $title = NULL) {
  static $saved_title = array();

  dpm($nid);
  dpm($title);

  $node = node_load($nid);

  if (!is_null($title)) {
    $saved_title[$nid] = $node->title;
    $node->title = $title;
  }
  elseif (isset($saved_title[$nid])) {
    $node->title = $saved_title[$nid];
  }
}

/**
 * Determines if the given view mode on this node shows the title.
 *
 * @param object $node
 *   The fully loaded node object to check.
 * @param string $view_mode
 *   The view mode.
 *
 * @return boolean
 *   TRUE if the title is shown; FALSE otherwise.
 */
function _proud_panels_is_title_shown($node, $view_mode) {
  if (!empty($node->panelizer) && (!empty($node->panelizer[$view_mode]) || !empty($node->panelizer['default']))) {
    $panelizer_display = isset($node->panelizer[$view_mode]) ? $node->panelizer[$view_mode]->display : $node->panelizer['default']->display;
    if (empty($panelizer_display->hide_title) && empty($panelizer_display->pane_title) && strpos($panelizer_display->title, '%node:title') !== FALSE) {
      // We're showing the title via the Panelizer display title.
      return TRUE;
    }
    else {
      foreach ($panelizer_display->content as $pane) {
        if (($pane->type == 'node_title' && $pane->subtype == 'node_title') || ($pane->type == 'token' && $pane->subtype == 'node:title')) {
          // We're showing the node title in a Pane inside the view mode.
          return TRUE;
        }
        elseif ($pane->type == 'node_content' && $pane->subtype == 'node_content') {
          $child_view_mode = $pane->configuration['build_mode'];
          // Prevent endless recursion.
          if ($child_view_mode == $view_mode) {
            if ($child_view_mode != 'full') {
              $child_view_mode = 'full';
            }
            else {
              continue;
            }
          }
          if (_proud_panels_is_title_shown($node, $child_view_mode)) {
            return TRUE;
          }
        }
      }

      return FALSE;
    }
  }
  else {
    // If we're not using Panelizer, the theme should always be showing
    // the title when rendering the node.
    return TRUE;
  }
}

/**
 * Implements hook_views_post_execute().
 */
function proud_panels_views_post_execute(&$view) {
  if ($view->name == 'proud_panels_general_content' && $view->current_display == 'piece_of_content') {
    $display =& $view->display[$view->current_display];
    $row_plugin = $view->style_plugin->row_plugin;

    // If we are rendering the actual node, rather than showing fields or a
    // table, then we need to move the title override to the node itself.
    if (is_a($row_plugin, 'entity_views_plugin_row_entity_view')) {
      $nid = $view->result[0]->nid;
      $overridden_title = $display->handler->options['title'];
      if (!empty($overridden_title)) {
        _proud_panels_content_item_title_rewrite($nid, $overridden_title);


        $hide_pane_title = FALSE;

        // Attempt to determine if the node title is being shown in the view
        // mode, so that we can hide the pane title and avoid showing it twice.
        $node = node_load($nid);
        if (_proud_panels_is_title_shown($node, $row_plugin->options['view_mode'])) {
          unset($display->handler->options['title']);
        }
      }
    }
  }
}

/**
 * Implements hook_views_post_render().
 */
function proud_panels_views_post_render(&$view) {
  if ($view->name == 'proud_panels_general_content' && $view->current_display == 'piece_of_content') {
    // Reset the title to its original value.
    $display = $view->display[$view->current_display];
    if (is_a($view->style_plugin->row_plugin, 'entity_views_plugin_row_entity_view')) {
      _proud_panels_content_item_title_rewrite($view->result[0]->nid);
    }
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function proud_panels_form_views_content_views_panes_content_type_edit_form_alter(&$form, &$form_state) {
  $view = $form_state['view'];
  if ($view->name == 'proud_panels_general_content' && $view->current_display == 'piece_of_content') {
    $exposed =& $form['exposed'];

    // If the user updated proud_panels, but hasn't run the update function
    // helm_wigets_update_7012() yet, then bail out because this code can
    // actually break this widget entirely.
    if (empty($exposed['filter-nid'])) {
      return;
    }

    // If we have a value for NID, then we use that to set the title and then
    // clear out and hide the NID. This allows the user to chose the node using
    // the title autocomplete.
    if (!empty($exposed['filter-nid']['nid']['#default_value'])) {
      if ($node = node_load($exposed['filter-nid']['nid']['#default_value'])) {
        $form_state['original_nid'] = $node->nid;
        $form_state['original_title'] = $node->title;
        $exposed['filter-title']['title']['#default_value'] = $node->title;
      }
    }
    $exposed['filter-nid']['nid']['#default_value'] = '';
    $exposed['filter-nid']['#access'] = FALSE;

    // a submit callback that will convert back from the title to the NID.
    array_unshift($form['#submit'], '_proud_panels_content_item_form_submit');
  }
}

/**
 * Submission callback for 'Content Item' widget's exposed form.
 */
function _proud_panels_content_item_form_submit($form, &$form_state) {
  $exposed =& $form_state['values']['exposed'];
  if ($exposed['title'] != $form_state['original_title']) {
    // If the title has changed, we need to load the node with that title, set
    // the NID, and then clear out the title. We use the View itself to query
    // so that the result is consistent with autocomplete.
    $view = views_get_view('proud_panels_general_content');
    $view->set_display('piece_of_content');
    $view->set_exposed_input($exposed);
    $view->pre_execute();
    $view->execute($view->current_display);
    $view->post_execute();
    if (count($view->result) > 0) {
      $exposed['nid'] = $view->result[0]->nid;
      $exposed['title'] = '';
    }
  }
  else {
    // If the title hasn't change, we just revert back to the original NID.
    $exposed['nid'] = $form_state['original_nid'];
    $exposed['title'] = '';
  }
}
