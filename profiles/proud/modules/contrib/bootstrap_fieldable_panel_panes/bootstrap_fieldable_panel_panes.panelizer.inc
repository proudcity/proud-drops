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
  $panelizer->name = 'fieldable_panels_pane:bootstrap_card:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'fieldable_panels_pane';
  $panelizer->panelizer_key = 'bootstrap_card';
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
  $display->layout = 'proud_card';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c31a8bd1-c338-484d-a47e-6b787899c614';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a847a74a-8455-4fe7-a109-eb2ecaf65080';
    $pane->panel = 'main';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'fieldable_panels_pane:title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a847a74a-8455-4fe7-a109-eb2ecaf65080';
    $display->content['new-a847a74a-8455-4fe7-a109-eb2ecaf65080'] = $pane;
    $display->panels['main'][0] = 'new-a847a74a-8455-4fe7-a109-eb2ecaf65080';
    $pane = new stdClass();
    $pane->pid = 'new-cc7b08d8-4fcb-4cd6-99dc-f25d722c9f51';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'fieldable_panels_pane:field_card_caption';
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
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element' => 'p',
        'attributes' => array(
          'class' => '',
          'id' => '',
        ),
      ),
      'style' => 'custom',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cc7b08d8-4fcb-4cd6-99dc-f25d722c9f51';
    $display->content['new-cc7b08d8-4fcb-4cd6-99dc-f25d722c9f51'] = $pane;
    $display->panels['main'][1] = 'new-cc7b08d8-4fcb-4cd6-99dc-f25d722c9f51';
    $pane = new stdClass();
    $pane->pid = 'new-6b900c5d-a536-441a-a2dc-74e992432cd3';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'fieldable_panels_pane:field_card_link';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6b900c5d-a536-441a-a2dc-74e992432cd3';
    $display->content['new-6b900c5d-a536-441a-a2dc-74e992432cd3'] = $pane;
    $display->panels['main'][2] = 'new-6b900c5d-a536-441a-a2dc-74e992432cd3';
    $pane = new stdClass();
    $pane->pid = 'new-fd7efbbe-fa03-4ca4-b986-63e01e3b7a8f';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'fieldable_panels_pane:field_card_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'flexible_media',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
        'autoplay' => 1,
        'image_style' => 'thumbnail',
        'link_field' => 'field_card_link',
        'show_src' => 1,
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fd7efbbe-fa03-4ca4-b986-63e01e3b7a8f';
    $display->content['new-fd7efbbe-fa03-4ca4-b986-63e01e3b7a8f'] = $pane;
    $display->panels['top'][0] = 'new-fd7efbbe-fa03-4ca4-b986-63e01e3b7a8f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-fd7efbbe-fa03-4ca4-b986-63e01e3b7a8f';
  $panelizer->display = $display;
  $export['fieldable_panels_pane:bootstrap_card:default:default'] = $panelizer;

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
