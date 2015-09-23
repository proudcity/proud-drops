<?php
/**
 * @file
 * bootstrap_fieldable_panel_panes.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function bootstrap_fieldable_panel_panes_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'fieldable_panels_pane:bootstrap_accordion:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'fieldable_panels_pane';
  $panelizer->panelizer_key = 'bootstrap_accordion';
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a3029504-d731-4c1b-840e-97109370304a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-510eaa17-f6bc-4c8a-8258-afff8ff46a17';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'bootstrap_accordion-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '510eaa17-f6bc-4c8a-8258-afff8ff46a17';
  $display->content['new-510eaa17-f6bc-4c8a-8258-afff8ff46a17'] = $pane;
  $display->panels['center'][0] = 'new-510eaa17-f6bc-4c8a-8258-afff8ff46a17';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-510eaa17-f6bc-4c8a-8258-afff8ff46a17';
  $panelizer->display = $display;
  $export['fieldable_panels_pane:bootstrap_accordion:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'fieldable_panels_pane:bootstrap_carousel:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'fieldable_panels_pane';
  $panelizer->panelizer_key = 'bootstrap_carousel';
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a8973d59-9caa-42db-aed5-fd5f0f924be6';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2e7f5677-d652-4a9b-b63c-02a70ce7d55f';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'bootstrap_carousel-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2e7f5677-d652-4a9b-b63c-02a70ce7d55f';
  $display->content['new-2e7f5677-d652-4a9b-b63c-02a70ce7d55f'] = $pane;
  $display->panels['middle'][0] = 'new-2e7f5677-d652-4a9b-b63c-02a70ce7d55f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2e7f5677-d652-4a9b-b63c-02a70ce7d55f';
  $panelizer->display = $display;
  $export['fieldable_panels_pane:bootstrap_carousel:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'fieldable_panels_pane:bootstrap_tabs:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'fieldable_panels_pane';
  $panelizer->panelizer_key = 'bootstrap_tabs';
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ce3d53b7-3d28-4a84-b506-bd2ddae76979';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-56b8da23-f5a9-42fe-a151-4990b282c583';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'bootstrap_tabs-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '56b8da23-f5a9-42fe-a151-4990b282c583';
  $display->content['new-56b8da23-f5a9-42fe-a151-4990b282c583'] = $pane;
  $display->panels['center'][0] = 'new-56b8da23-f5a9-42fe-a151-4990b282c583';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['fieldable_panels_pane:bootstrap_tabs:default:default'] = $panelizer;

  return $export;
}
