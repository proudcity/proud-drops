<?php
/**
 * @file
 * proud_page_display.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function proud_page_display_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
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
  $display->layout = 'proud_sidebar_top';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style' => 'wrapper_raw',
    'style_settings' => array(
      'default' => array(),
      'sidebar' => array(
        'content' => array(
          'element' => 'no_wrapper',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'theme' => 0,
      ),
      'contentmain' => array(),
      'top' => NULL,
      'main' => NULL,
      'bottom' => NULL,
    ),
    'sidebar' => array(
      'style' => 'wrapper_element',
    ),
    'contentmain' => array(
      'style' => 'wrapper_raw',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '865c8c0e-681d-4c10-b83f-33bb41866e5d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-50c15dc9-c133-4124-b199-dc3e7f228d42';
    $pane->panel = 'main';
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
    $pane->uuid = '50c15dc9-c133-4124-b199-dc3e7f228d42';
    $display->content['new-50c15dc9-c133-4124-b199-dc3e7f228d42'] = $pane;
    $display->panels['main'][0] = 'new-50c15dc9-c133-4124-b199-dc3e7f228d42';
    $pane = new stdClass();
    $pane->pid = 'new-826ef88c-c470-445b-a9f8-545aa53804ee';
    $pane->panel = 'main';
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
    $pane->uuid = '826ef88c-c470-445b-a9f8-545aa53804ee';
    $display->content['new-826ef88c-c470-445b-a9f8-545aa53804ee'] = $pane;
    $display->panels['main'][1] = 'new-826ef88c-c470-445b-a9f8-545aa53804ee';
    $pane = new stdClass();
    $pane->pid = 'new-a455dd14-9157-45ba-ad64-c333a9f0d035';
    $pane->panel = 'main';
    $pane->type = 'proud_panels_hr';
    $pane->subtype = 'proud_panels_hr';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a455dd14-9157-45ba-ad64-c333a9f0d035';
    $display->content['new-a455dd14-9157-45ba-ad64-c333a9f0d035'] = $pane;
    $display->panels['main'][2] = 'new-a455dd14-9157-45ba-ad64-c333a9f0d035';
    $pane = new stdClass();
    $pane->pid = 'new-3d4ed296-68d5-4ac3-b527-438624fd2ce0';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'flexible_media',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
        'autoplay' => 1,
        'image_style' => 'default',
        'link_field' => '',
        'show_src' => 0,
        'show_attribution' => 1,
        'image_style_xs' => 'default',
        'image_style_sm' => 'default',
        'image_style_md' => 'default',
        'image_style_lg' => 'default',
        'image_style_lightbox' => '',
        'class' => 'col-sm-12',
        'v_class' => 'embed-responsive-16by9',
        'play_class' => 'btn btn-primary fa fa-play-circle',
        'light_class' => '',
      ),
      'context' => 'panelizer',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3d4ed296-68d5-4ac3-b527-438624fd2ce0';
    $display->content['new-3d4ed296-68d5-4ac3-b527-438624fd2ce0'] = $pane;
    $display->panels['main'][3] = 'new-3d4ed296-68d5-4ac3-b527-438624fd2ce0';
    $pane = new stdClass();
    $pane->pid = 'new-42b9d477-c70d-4724-852f-61b24508a138';
    $pane->panel = 'main';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'panelizer',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '42b9d477-c70d-4724-852f-61b24508a138';
    $display->content['new-42b9d477-c70d-4724-852f-61b24508a138'] = $pane;
    $display->panels['main'][4] = 'new-42b9d477-c70d-4724-852f-61b24508a138';
    $pane = new stdClass();
    $pane->pid = 'new-7a682982-1be2-4117-8208-73c83665a2bb';
    $pane->panel = 'sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '7a682982-1be2-4117-8208-73c83665a2bb';
    $display->content['new-7a682982-1be2-4117-8208-73c83665a2bb'] = $pane;
    $display->panels['sidebar'][0] = 'new-7a682982-1be2-4117-8208-73c83665a2bb';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  return $export;
}
