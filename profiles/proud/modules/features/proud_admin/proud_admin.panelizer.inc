<?php
/**
 * @file
 * proud_admin.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function proud_admin_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'user:user:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'user';
  $panelizer->panelizer_key = 'user';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'right_sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'sidebar' => NULL,
      'main' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ba28a3ff-bf6b-4897-8d8a-d4b3bc99dde1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d41d23b6-4c59-4698-bb0b-c2bb8638c42a';
    $pane->panel = 'main';
    $pane->type = 'google_analytics_embed_dashboard';
    $pane->subtype = 'google_analytics_embed_dashboard';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'text' => '',
      'override_title' => 1,
      'override_title_text' => 'Analytics',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd41d23b6-4c59-4698-bb0b-c2bb8638c42a';
    $display->content['new-d41d23b6-4c59-4698-bb0b-c2bb8638c42a'] = $pane;
    $display->panels['main'][0] = 'new-d41d23b6-4c59-4698-bb0b-c2bb8638c42a';
    $pane = new stdClass();
    $pane->pid = 'new-af2aec02-e456-422e-8f3e-17b5c6182714';
    $pane->panel = 'main';
    $pane->type = 'proud_map_app_pane';
    $pane->subtype = 'proud_map_app_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'af2aec02-e456-422e-8f3e-17b5c6182714';
    $display->content['new-af2aec02-e456-422e-8f3e-17b5c6182714'] = $pane;
    $display->panels['main'][1] = 'new-af2aec02-e456-422e-8f3e-17b5c6182714';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['user:user:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'user:user:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'user';
  $panelizer->panelizer_key = 'user';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'proud_admin_dashboard';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'main' => NULL,
      'bottom1' => NULL,
      'bottom2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e5580121-db83-4653-8547-fba8da5c4f88';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-984ce6b6-d0f7-4c30-b936-cb509d3927a9';
    $pane->panel = 'main';
    $pane->type = 'google_analytics_embed_dashboard';
    $pane->subtype = 'google_analytics_embed_dashboard';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'text' => '',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '984ce6b6-d0f7-4c30-b936-cb509d3927a9';
    $display->content['new-984ce6b6-d0f7-4c30-b936-cb509d3927a9'] = $pane;
    $display->panels['main'][0] = 'new-984ce6b6-d0f7-4c30-b936-cb509d3927a9';
    $pane = new stdClass();
    $pane->pid = 'new-f2bb6745-f226-4542-b3ff-e59eea8e200c';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'node-recent';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f2bb6745-f226-4542-b3ff-e59eea8e200c';
    $display->content['new-f2bb6745-f226-4542-b3ff-e59eea8e200c'] = $pane;
    $display->panels['main'][1] = 'new-f2bb6745-f226-4542-b3ff-e59eea8e200c';
    $pane = new stdClass();
    $pane->pid = 'new-09c82f09-f162-4022-af42-e9edbb55897c';
    $pane->panel = 'top';
    $pane->type = 'proud_admin_add_content';
    $pane->subtype = 'proud_admin_add_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '09c82f09-f162-4022-af42-e9edbb55897c';
    $display->content['new-09c82f09-f162-4022-af42-e9edbb55897c'] = $pane;
    $display->panels['top'][0] = 'new-09c82f09-f162-4022-af42-e9edbb55897c';
    $pane = new stdClass();
    $pane->pid = 'new-adffa64e-4b2b-4004-a443-887429150e11';
    $pane->panel = 'top';
    $pane->type = 'proud_admin_main_menu';
    $pane->subtype = 'proud_admin_main_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'adffa64e-4b2b-4004-a443-887429150e11';
    $display->content['new-adffa64e-4b2b-4004-a443-887429150e11'] = $pane;
    $display->panels['top'][1] = 'new-adffa64e-4b2b-4004-a443-887429150e11';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['user:user:default:default'] = $panelizer;

  return $export;
}
