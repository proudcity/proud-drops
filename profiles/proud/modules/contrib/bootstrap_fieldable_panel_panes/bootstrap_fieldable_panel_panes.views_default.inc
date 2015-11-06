<?php
/**
 * @file
 * bootstrap_fieldable_panel_panes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bootstrap_fieldable_panel_panes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bootstrap_accordion';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'fieldable_panels_panes';
  $view->human_name = 'Bootstrap Accordion';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_accordion_plugin_style';
  $handler->display->display_options['style_options']['title_field'] = 'field_tabs_title';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Fieldable panel pane: Tabs (field_tabs_tab) */
  $handler->display->display_options['relationships']['field_tabs_tab_value']['id'] = 'field_tabs_tab_value';
  $handler->display->display_options['relationships']['field_tabs_tab_value']['table'] = 'field_data_field_tabs_tab';
  $handler->display->display_options['relationships']['field_tabs_tab_value']['field'] = 'field_tabs_tab_value';
  $handler->display->display_options['relationships']['field_tabs_tab_value']['delta'] = '-1';
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_tabs_title']['id'] = 'field_tabs_title';
  $handler->display->display_options['fields']['field_tabs_title']['table'] = 'field_data_field_tabs_title';
  $handler->display->display_options['fields']['field_tabs_title']['field'] = 'field_tabs_title';
  $handler->display->display_options['fields']['field_tabs_title']['relationship'] = 'field_tabs_tab_value';
  $handler->display->display_options['fields']['field_tabs_title']['label'] = '';
  $handler->display->display_options['fields']['field_tabs_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tabs_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tabs_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tabs_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tabs_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tabs_title']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Text */
  $handler->display->display_options['fields']['field_tabs_body']['id'] = 'field_tabs_body';
  $handler->display->display_options['fields']['field_tabs_body']['table'] = 'field_data_field_tabs_body';
  $handler->display->display_options['fields']['field_tabs_body']['field'] = 'field_tabs_body';
  $handler->display->display_options['fields']['field_tabs_body']['relationship'] = 'field_tabs_tab_value';
  $handler->display->display_options['fields']['field_tabs_body']['label'] = '';
  $handler->display->display_options['fields']['field_tabs_body']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tabs_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tabs_body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tabs_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tabs_body']['field_api_classes'] = TRUE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'uuid' => array(
      'type' => 'context',
      'context' => 'entity:fieldable_panels_pane.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Fieldable pane: Fieldable panel pane UUID',
    ),
  );
  $export['bootstrap_accordion'] = $view;

  $view = new view();
  $view->name = 'bootstrap_carousel';
  $view->description = 'Displays Image Collection Panels Pane as Bootstrap Carousel';
  $view->tag = 'helm_home';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Bootstrap Carousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = '50000';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 0;
  $handler->display->display_options['style_options']['pause'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field collection item: Entity with the Slides (field_carousel_slide) */
  $handler->display->display_options['relationships']['field_carousel_slide_fieldable_panels_pane']['id'] = 'field_carousel_slide_fieldable_panels_pane';
  $handler->display->display_options['relationships']['field_carousel_slide_fieldable_panels_pane']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_carousel_slide_fieldable_panels_pane']['field'] = 'field_carousel_slide_fieldable_panels_pane';
  /* Field: Field collection item: Class */
  $handler->display->display_options['fields']['field_carousel_class']['id'] = 'field_carousel_class';
  $handler->display->display_options['fields']['field_carousel_class']['table'] = 'field_data_field_carousel_class';
  $handler->display->display_options['fields']['field_carousel_class']['field'] = 'field_carousel_class';
  $handler->display->display_options['fields']['field_carousel_class']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_class']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_class']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_class']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_class']['element_type'] = '0';
  $handler->display->display_options['fields']['field_carousel_class']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_class']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_carousel_class']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_class']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_carousel_image']['id'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['table'] = 'field_data_field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['field'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_image']['alter']['text'] = '<div class="carousel-background [field_carousel_class]">[field_carousel_image]</div>';
  $handler->display->display_options['fields']['field_carousel_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_carousel_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_carousel_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousel_image']['type'] = 'flexible_media';
  $handler->display->display_options['fields']['field_carousel_image']['settings'] = array(
    'show_src' => 1,
    'image_style' => 'original',
    'image_style_xs' => '',
    'image_style_sm' => '',
    'image_style_md' => 'original',
    'image_style_lg' => '',
    'show_attribution' => 1,
    'link_field' => 'field_faq_link',
    'image_style_lightbox' => '',
    'class' => 'col-sm-12',
    'format' => NULL,
    'autoplay' => 1,
    'v_class' => 'embed-responsive-16by9',
    'play_class' => 'btn btn-primary fa fa-play-circle',
    'light_class' => '',
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_carousel_image']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_carousel_title']['id'] = 'field_carousel_title';
  $handler->display->display_options['fields']['field_carousel_title']['table'] = 'field_data_field_carousel_title';
  $handler->display->display_options['fields']['field_carousel_title']['field'] = 'field_carousel_title';
  $handler->display->display_options['fields']['field_carousel_title']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_carousel_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_carousel_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_title']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_carousel_title']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_carousel_caption']['id'] = 'field_carousel_caption';
  $handler->display->display_options['fields']['field_carousel_caption']['table'] = 'field_data_field_carousel_caption';
  $handler->display->display_options['fields']['field_carousel_caption']['field'] = 'field_carousel_caption';
  $handler->display->display_options['fields']['field_carousel_caption']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_caption']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_caption']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_caption']['element_type'] = '0';
  $handler->display->display_options['fields']['field_carousel_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_caption']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_carousel_caption']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_caption']['field_api_classes'] = TRUE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_imagecollection_slide_fieldable_panels_pane';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';

  /* Display: Slideshow */
  $handler = $view->new_display('panel_pane', 'Slideshow', 'panel_pane_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'field_carousel_slide_fieldable_panels_pane';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'uuid' => array(
      'type' => 'context',
      'context' => 'entity:fieldable_panels_pane.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Fieldable pane: Fieldable panel pane UUID',
    ),
  );
  $handler->display->display_options['link_to_view'] = '0';
  $export['bootstrap_carousel'] = $view;

  $view = new view();
  $view->name = 'bootstrap_tabs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'fieldable_panels_panes';
  $view->human_name = 'Bootstrap Tabs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_tab_plugin_style';
  $handler->display->display_options['style_options']['tab_field'] = 'field_tabs_title';
  $handler->display->display_options['style_options']['justified'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Fieldable panel pane: Tabs (field_tabs_tab) */
  $handler->display->display_options['relationships']['field_tabs_tab_value']['id'] = 'field_tabs_tab_value';
  $handler->display->display_options['relationships']['field_tabs_tab_value']['table'] = 'field_data_field_tabs_tab';
  $handler->display->display_options['relationships']['field_tabs_tab_value']['field'] = 'field_tabs_tab_value';
  $handler->display->display_options['relationships']['field_tabs_tab_value']['delta'] = '-1';
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_tabs_title']['id'] = 'field_tabs_title';
  $handler->display->display_options['fields']['field_tabs_title']['table'] = 'field_data_field_tabs_title';
  $handler->display->display_options['fields']['field_tabs_title']['field'] = 'field_tabs_title';
  $handler->display->display_options['fields']['field_tabs_title']['relationship'] = 'field_tabs_tab_value';
  $handler->display->display_options['fields']['field_tabs_title']['label'] = '';
  $handler->display->display_options['fields']['field_tabs_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tabs_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tabs_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tabs_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tabs_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tabs_title']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Text */
  $handler->display->display_options['fields']['field_tabs_body']['id'] = 'field_tabs_body';
  $handler->display->display_options['fields']['field_tabs_body']['table'] = 'field_data_field_tabs_body';
  $handler->display->display_options['fields']['field_tabs_body']['field'] = 'field_tabs_body';
  $handler->display->display_options['fields']['field_tabs_body']['relationship'] = 'field_tabs_tab_value';
  $handler->display->display_options['fields']['field_tabs_body']['label'] = '';
  $handler->display->display_options['fields']['field_tabs_body']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tabs_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tabs_body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tabs_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tabs_body']['field_api_classes'] = TRUE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'uuid' => array(
      'type' => 'context',
      'context' => 'entity:fieldable_panels_pane.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Fieldable pane: Fieldable panel pane UUID',
    ),
  );
  $export['bootstrap_tabs'] = $view;

  return $export;
}
