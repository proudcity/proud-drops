<?php
/**
 * @file
 * proud_landingpage_display.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function proud_landingpage_display_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:landingpage:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'landingpage';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'proud_landing';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'banner' => array(
        'full' => TRUE,
        'inverse' => '',
        'advanced' => array(
          'class' => '',
          'id' => '',
          'image' => '%node:field_media',
          'image_style' => '',
        ),
      ),
      'top' => NULL,
      'col1' => NULL,
      'col2' => NULL,
      'divider1' => NULL,
      'tri1' => NULL,
      'tri2' => NULL,
      'tri3' => NULL,
      'divider2' => NULL,
      'quad1' => NULL,
      'quad2' => NULL,
      'quad3' => NULL,
      'quad4' => NULL,
      'bottom' => NULL,
      'footer' => NULL,
    ),
    'banner' => array(
      'style' => 'jumbotron_image',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '596ce1b6-3669-438b-95bd-de932de048f1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3a28db14-9025-4edd-bea6-c2d063108dc6';
    $pane->panel = 'banner';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element' => 'h1',
        'page_title' => 'page-title',
        'advanced' => array(
          'class' => '',
        ),
      ),
      'style' => 'heading',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3a28db14-9025-4edd-bea6-c2d063108dc6';
    $display->content['new-3a28db14-9025-4edd-bea6-c2d063108dc6'] = $pane;
    $display->panels['banner'][0] = 'new-3a28db14-9025-4edd-bea6-c2d063108dc6';
    $pane = new stdClass();
    $pane->pid = 'new-1fe1d5c0-bc5b-4109-9c02-10c058c4f053';
    $pane->panel = 'banner';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_subtitle';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'lead',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1fe1d5c0-bc5b-4109-9c02-10c058c4f053';
    $display->content['new-1fe1d5c0-bc5b-4109-9c02-10c058c4f053'] = $pane;
    $display->panels['banner'][1] = 'new-1fe1d5c0-bc5b-4109-9c02-10c058c4f053';
    $pane = new stdClass();
    $pane->pid = 'new-dfb88c46-7ba4-43da-b14f-9b202a5568e0';
    $pane->panel = 'sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'sidebar';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dfb88c46-7ba4-43da-b14f-9b202a5568e0';
    $display->content['new-dfb88c46-7ba4-43da-b14f-9b202a5568e0'] = $pane;
    $display->panels['sidebar'][0] = 'new-dfb88c46-7ba4-43da-b14f-9b202a5568e0';
    $pane = new stdClass();
    $pane->pid = 'new-2032fa09-c207-4600-a63a-a86ddb2de142';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
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
    $pane->uuid = '2032fa09-c207-4600-a63a-a86ddb2de142';
    $display->content['new-2032fa09-c207-4600-a63a-a86ddb2de142'] = $pane;
    $display->panels['top'][0] = 'new-2032fa09-c207-4600-a63a-a86ddb2de142';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:landingpage:default'] = $panelizer;

  return $export;
}
