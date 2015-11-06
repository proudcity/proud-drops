<?php
/**
 * @file
 * proud_news_display.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function proud_news_display_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news';
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
  $display->layout = 'proud_sidebar_bottom';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'content' => array(
          'element' => '0',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'theme' => 0,
      ),
      'sidebar' => array(
        'content' => array(
          'element' => '0',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'theme' => 0,
      ),
      'contentmain' => array(
        'content' => array(
          'element' => '0',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'theme' => 0,
      ),
      'top' => NULL,
      'main' => NULL,
      'bottom' => NULL,
    ),
    'style' => 'wrapper_element',
    'contentmain' => array(
      'style' => 'wrapper_element',
    ),
    'sidebar' => array(
      'style' => 'wrapper_element',
    ),
  );
  $display->cache = array();
  $display->title = 'News';
  $display->uuid = 'e268aed3-0cd7-4cf6-870c-5faa75f8cf64';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1801ebed-d0fa-4cde-a23e-16d1e4fad1c8';
    $pane->panel = 'main';
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
    $pane->uuid = '1801ebed-d0fa-4cde-a23e-16d1e4fad1c8';
    $display->content['new-1801ebed-d0fa-4cde-a23e-16d1e4fad1c8'] = $pane;
    $display->panels['main'][0] = 'new-1801ebed-d0fa-4cde-a23e-16d1e4fad1c8';
    $pane = new stdClass();
    $pane->pid = 'new-9bb056ef-0a4e-485e-92d3-bb696188c2de';
    $pane->panel = 'sidebar';
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
    $pane->uuid = '9bb056ef-0a4e-485e-92d3-bb696188c2de';
    $display->content['new-9bb056ef-0a4e-485e-92d3-bb696188c2de'] = $pane;
    $display->panels['sidebar'][0] = 'new-9bb056ef-0a4e-485e-92d3-bb696188c2de';
    $pane = new stdClass();
    $pane->pid = 'new-14e0207d-ee1f-4dc3-9f53-2c24e2521456';
    $pane->panel = 'sidebar';
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
    $pane->uuid = '14e0207d-ee1f-4dc3-9f53-2c24e2521456';
    $display->content['new-14e0207d-ee1f-4dc3-9f53-2c24e2521456'] = $pane;
    $display->panels['sidebar'][1] = 'new-14e0207d-ee1f-4dc3-9f53-2c24e2521456';
    $pane = new stdClass();
    $pane->pid = 'new-3878e76b-da74-4196-afae-9ac825784543';
    $pane->panel = 'sidebar';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element' => 'span',
        'attributes' => array(
          'class' => 'text-muted',
          'id' => '',
        ),
      ),
      'style' => 'custom',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3878e76b-da74-4196-afae-9ac825784543';
    $display->content['new-3878e76b-da74-4196-afae-9ac825784543'] = $pane;
    $display->panels['sidebar'][2] = 'new-3878e76b-da74-4196-afae-9ac825784543';
    $pane = new stdClass();
    $pane->pid = 'new-04123bd3-f23e-4f14-b50e-9db4af263699';
    $pane->panel = 'sidebar';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'proud_date_formats_date_medium',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element' => 'span',
        'attributes' => array(
          'class' => 'text-muted',
          'id' => '',
        ),
      ),
      'style' => 'custom',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '04123bd3-f23e-4f14-b50e-9db4af263699';
    $display->content['new-04123bd3-f23e-4f14-b50e-9db4af263699'] = $pane;
    $display->panels['sidebar'][3] = 'new-04123bd3-f23e-4f14-b50e-9db4af263699';
    $pane = new stdClass();
    $pane->pid = 'new-72e223b3-d053-4b61-881d-ed25f9df3638';
    $pane->panel = 'sidebar';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '72e223b3-d053-4b61-881d-ed25f9df3638';
    $display->content['new-72e223b3-d053-4b61-881d-ed25f9df3638'] = $pane;
    $display->panels['sidebar'][4] = 'new-72e223b3-d053-4b61-881d-ed25f9df3638';
    $pane = new stdClass();
    $pane->pid = 'new-1b3078ca-8519-4c7b-a6bf-4084f69f23dc';
    $pane->panel = 'sidebar';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '1b3078ca-8519-4c7b-a6bf-4084f69f23dc';
    $display->content['new-1b3078ca-8519-4c7b-a6bf-4084f69f23dc'] = $pane;
    $display->panels['sidebar'][5] = 'new-1b3078ca-8519-4c7b-a6bf-4084f69f23dc';
    $pane = new stdClass();
    $pane->pid = 'new-95520652-b9a0-4ee9-901d-6f82a41aa59f';
    $pane->panel = 'sidebar';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '95520652-b9a0-4ee9-901d-6f82a41aa59f';
    $display->content['new-95520652-b9a0-4ee9-901d-6f82a41aa59f'] = $pane;
    $display->panels['sidebar'][6] = 'new-95520652-b9a0-4ee9-901d-6f82a41aa59f';
    $pane = new stdClass();
    $pane->pid = 'new-21f96916-2f8b-4e40-b2a5-ccadf92088ea';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_attachment';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'media_formatter_icons',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => '',
        'thumbnail_size' => 'md',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '21f96916-2f8b-4e40-b2a5-ccadf92088ea';
    $display->content['new-21f96916-2f8b-4e40-b2a5-ccadf92088ea'] = $pane;
    $display->panels['sidebar'][7] = 'new-21f96916-2f8b-4e40-b2a5-ccadf92088ea';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:news:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news:default:list';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'list';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'proud_one_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'de9e5a7e-981c-4c55-b945-51cf9817090d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-51d2e288-2bc7-4db7-a815-d8cd33974d38';
    $pane->panel = 'main';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
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
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '51d2e288-2bc7-4db7-a815-d8cd33974d38';
    $display->content['new-51d2e288-2bc7-4db7-a815-d8cd33974d38'] = $pane;
    $display->panels['main'][0] = 'new-51d2e288-2bc7-4db7-a815-d8cd33974d38';
    $pane = new stdClass();
    $pane->pid = 'new-0e0143cf-cd06-4186-b0bd-6290c6a6ebf0';
    $pane->panel = 'main';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'proud_date_formats_date_medium',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element' => 'p',
        'attributes' => array(
          'class' => 'text-muted',
          'id' => '',
        ),
      ),
      'style' => 'custom',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0e0143cf-cd06-4186-b0bd-6290c6a6ebf0';
    $display->content['new-0e0143cf-cd06-4186-b0bd-6290c6a6ebf0'] = $pane;
    $display->panels['main'][1] = 'new-0e0143cf-cd06-4186-b0bd-6290c6a6ebf0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:news:default:list'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H3';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'proud_teaser';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'content' => array(
          'element' => '0',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'theme' => 0,
      ),
      'sidebar' => NULL,
      'contentmain' => array(
        'content' => array(
          'element' => '0',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'theme' => 0,
      ),
      'top' => NULL,
      'col1' => NULL,
      'col2' => NULL,
      'col3' => NULL,
    ),
    'contentmain' => array(
      'style' => 'wrapper_element',
    ),
    'style' => 'wrapper_element',
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '85da5139-1fd2-43b0-a91d-b6dc80117370';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c62a5c83-6b21-43fa-83d2-681f59ff77b2';
    $pane->panel = 'col2';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
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
        'element' => 'h4',
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
    $pane->uuid = 'c62a5c83-6b21-43fa-83d2-681f59ff77b2';
    $display->content['new-c62a5c83-6b21-43fa-83d2-681f59ff77b2'] = $pane;
    $display->panels['col2'][0] = 'new-c62a5c83-6b21-43fa-83d2-681f59ff77b2';
    $pane = new stdClass();
    $pane->pid = 'new-133aecaf-0554-44a0-8ef4-d1b48a42cbd6';
    $pane->panel = 'col2';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'proud_date_formats_date_medium',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element' => 'p',
        'attributes' => array(
          'class' => 'text-muted',
          'id' => '',
        ),
      ),
      'style' => 'custom',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '133aecaf-0554-44a0-8ef4-d1b48a42cbd6';
    $display->content['new-133aecaf-0554-44a0-8ef4-d1b48a42cbd6'] = $pane;
    $display->panels['col2'][1] = 'new-133aecaf-0554-44a0-8ef4-d1b48a42cbd6';
    $pane = new stdClass();
    $pane->pid = 'new-2632eda4-1ddb-4ee6-a8c5-c7743921fd50';
    $pane->panel = 'col2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '300',
      ),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2632eda4-1ddb-4ee6-a8c5-c7743921fd50';
    $display->content['new-2632eda4-1ddb-4ee6-a8c5-c7743921fd50'] = $pane;
    $display->panels['col2'][2] = 'new-2632eda4-1ddb-4ee6-a8c5-c7743921fd50';
    $pane = new stdClass();
    $pane->pid = 'new-89f61a34-7beb-4067-a57f-147bb373665f';
    $pane->panel = 'col3';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'flexible_media',
      'delta_limit' => '1',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
        'autoplay' => 1,
        'image_style' => 'thumbnail',
        'link_field' => '',
        'show_src' => 0,
        'show_attribution' => 1,
        'image_style_xs' => 'thumbnail',
        'image_style_sm' => 'thumbnail',
        'image_style_md' => 'thumbnail',
        'image_style_lg' => 'thumbnail',
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
    $pane->uuid = '89f61a34-7beb-4067-a57f-147bb373665f';
    $display->content['new-89f61a34-7beb-4067-a57f-147bb373665f'] = $pane;
    $display->panels['col3'][0] = 'new-89f61a34-7beb-4067-a57f-147bb373665f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:news:default:teaser'] = $panelizer;

  return $export;
}
