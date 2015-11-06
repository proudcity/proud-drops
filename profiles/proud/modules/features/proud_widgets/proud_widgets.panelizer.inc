<?php
/**
 * @file
 * proud_widgets.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function proud_widgets_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'fieldable_panels_pane:icon_button:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'fieldable_panels_pane';
  $panelizer->panelizer_key = 'icon_button';
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
  $display->layout = 'proud_minimal';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'main' => NULL,
    ),
    'main' => array(
      'style' => 'icon_button',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5052bf8a-aa16-4f06-9764-5bbc8bec555d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-338e74cb-4d23-470f-9813-f9d98e41c855';
    $pane->panel = 'main';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'fieldable_panels_pane:title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element' => 'h3',
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
    $pane->uuid = '338e74cb-4d23-470f-9813-f9d98e41c855';
    $display->content['new-338e74cb-4d23-470f-9813-f9d98e41c855'] = $pane;
    $display->panels['main'][0] = 'new-338e74cb-4d23-470f-9813-f9d98e41c855';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['fieldable_panels_pane:icon_button:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'fieldable_panels_pane:image:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'fieldable_panels_pane';
  $panelizer->panelizer_key = 'image';
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
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0e6b6b44-9615-46b8-b775-aa255c098d7c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-be067cd6-b14a-49e3-bcfa-da69d55b8d74';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'fieldable_panels_pane:field_basic_image_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'lazysizes',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'default',
        'image_style_lg' => 'default',
        'image_style_md' => 'default',
        'image_style_sm' => 'default',
        'image_style_xs' => 'default',
        'link_field' => '',
        'show_attribution' => 0,
        'show_src' => 1,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'be067cd6-b14a-49e3-bcfa-da69d55b8d74';
    $display->content['new-be067cd6-b14a-49e3-bcfa-da69d55b8d74'] = $pane;
    $display->panels['center'][0] = 'new-be067cd6-b14a-49e3-bcfa-da69d55b8d74';
    $pane = new stdClass();
    $pane->pid = 'new-8e2f35e0-1595-45e4-8721-4b148757cec4';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'fieldable_panels_pane:field_basic_image_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8e2f35e0-1595-45e4-8721-4b148757cec4';
    $display->content['new-8e2f35e0-1595-45e4-8721-4b148757cec4'] = $pane;
    $display->panels['center'][1] = 'new-8e2f35e0-1595-45e4-8721-4b148757cec4';
    $pane = new stdClass();
    $pane->pid = 'new-3dc53ecf-732d-4830-bb0a-747568c30898';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'fieldable_panels_pane:field_basic_image_caption';
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
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3dc53ecf-732d-4830-bb0a-747568c30898';
    $display->content['new-3dc53ecf-732d-4830-bb0a-747568c30898'] = $pane;
    $display->panels['center'][2] = 'new-3dc53ecf-732d-4830-bb0a-747568c30898';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3dc53ecf-732d-4830-bb0a-747568c30898';
  $panelizer->display = $display;
  $export['fieldable_panels_pane:image:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'fieldable_panels_pane:media:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'fieldable_panels_pane';
  $panelizer->panelizer_key = 'media';
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
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fe2dfdd7-68bc-4cd3-849f-93a262fe3acf';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['fieldable_panels_pane:media:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'fieldable_panels_pane:text:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'fieldable_panels_pane';
  $panelizer->panelizer_key = 'text';
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
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0530953a-62ce-4f6e-a777-25b7cf3efcf4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-673ca7e5-cdd3-4112-b999-b0244267f56d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'fieldable_panels_pane:field_basic_text_text';
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
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '673ca7e5-cdd3-4112-b999-b0244267f56d';
    $display->content['new-673ca7e5-cdd3-4112-b999-b0244267f56d'] = $pane;
    $display->panels['center'][0] = 'new-673ca7e5-cdd3-4112-b999-b0244267f56d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-673ca7e5-cdd3-4112-b999-b0244267f56d';
  $panelizer->display = $display;
  $export['fieldable_panels_pane:text:default:default'] = $panelizer;

  return $export;
}
