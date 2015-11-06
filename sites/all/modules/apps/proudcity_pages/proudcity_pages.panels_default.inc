<?php
/**
 * @file
 * proudcity_pages.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function proudcity_pages_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = '';
  $mini->admin_title = 'Footer';
  $mini->admin_description = 'The bottom footer logo and menus';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'proud_four_columns';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'col1' => array(
        'element' => 'h4',
        'content' => array(
          'attributes' => array(
            'class' => '',
            'id' => '',
          ),
        ),
      ),
      'col2' => NULL,
      'col3' => NULL,
      'col4' => NULL,
    ),
    'col1' => array(
      'style' => 'custom',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'de2eeba6-53d1-442d-aa16-8cbfaa7dea7c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-67efba96-ac96-4578-808a-f683abcddcdc';
    $pane->panel = 'col1';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
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
    $pane->uuid = '67efba96-ac96-4578-808a-f683abcddcdc';
    $display->content['new-67efba96-ac96-4578-808a-f683abcddcdc'] = $pane;
    $display->panels['col1'][0] = 'new-67efba96-ac96-4578-808a-f683abcddcdc';
    $pane = new stdClass();
    $pane->pid = 'new-7620864d-0da8-4ebd-81bf-1a33ee29a4af';
    $pane->panel = 'col1';
    $pane->type = 'page_slogan';
    $pane->subtype = 'page_slogan';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element' => 'small',
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
    $pane->uuid = '7620864d-0da8-4ebd-81bf-1a33ee29a4af';
    $display->content['new-7620864d-0da8-4ebd-81bf-1a33ee29a4af'] = $pane;
    $display->panels['col1'][1] = 'new-7620864d-0da8-4ebd-81bf-1a33ee29a4af';
    $pane = new stdClass();
    $pane->pid = 'new-0bfc9b34-9cf9-4483-8ad4-5c89c1efd76f';
    $pane->panel = 'col1';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'linked' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'heading',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0bfc9b34-9cf9-4483-8ad4-5c89c1efd76f';
    $display->content['new-0bfc9b34-9cf9-4483-8ad4-5c89c1efd76f'] = $pane;
    $display->panels['col1'][2] = 'new-0bfc9b34-9cf9-4483-8ad4-5c89c1efd76f';
    $pane = new stdClass();
    $pane->pid = 'new-947e2b61-fcaa-448f-91ff-c02dcd24624b';
    $pane->panel = 'col2';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Sections',
      'override_title_heading' => 'h5',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '947e2b61-fcaa-448f-91ff-c02dcd24624b';
    $display->content['new-947e2b61-fcaa-448f-91ff-c02dcd24624b'] = $pane;
    $display->panels['col2'][0] = 'new-947e2b61-fcaa-448f-91ff-c02dcd24624b';
    $pane = new stdClass();
    $pane->pid = 'new-db53dbdd-22cd-4425-966e-3926af1f1b80';
    $pane->panel = 'col3';
    $pane->type = 'proud_311_action_menu_pane';
    $pane->subtype = 'proud_311_action_menu_pane';
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
    $pane->uuid = 'db53dbdd-22cd-4425-966e-3926af1f1b80';
    $display->content['new-db53dbdd-22cd-4425-966e-3926af1f1b80'] = $pane;
    $display->panels['col3'][0] = 'new-db53dbdd-22cd-4425-966e-3926af1f1b80';
    $pane = new stdClass();
    $pane->pid = 'new-f69a9794-5e7f-4c39-9642-449722677a7a';
    $pane->panel = 'col4';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f69a9794-5e7f-4c39-9642-449722677a7a';
    $display->content['new-f69a9794-5e7f-4c39-9642-449722677a7a'] = $pane;
    $display->panels['col4'][0] = 'new-f69a9794-5e7f-4c39-9642-449722677a7a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-947e2b61-fcaa-448f-91ff-c02dcd24624b';
  $mini->display = $display;
  $export['footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer_actions';
  $mini->category = '';
  $mini->admin_title = 'Footer actions';
  $mini->admin_description = 'The actions bar that appears in the footer.';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'proud_one_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'main' => array(
        'element' => 'ul',
        'content' => array(
          'attributes' => array(
            'class' => 'nav navbar-nav',
            'id' => '',
          ),
        ),
      ),
      'default' => NULL,
    ),
    'main' => array(
      'style' => 'custom',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c3f7d65c-9eb6-4d59-acb4-301a7b294b4c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3755d2b9-7c99-4ffb-b978-4a0e85f8975c';
    $pane->panel = 'main';
    $pane->type = 'proud_panels_pane_share';
    $pane->subtype = 'proud_panels_pane_share';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element' => 'li',
        'attributes' => array(
          'class' => '',
          'id' => '',
        ),
      ),
      'style' => 'custom',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3755d2b9-7c99-4ffb-b978-4a0e85f8975c';
    $display->content['new-3755d2b9-7c99-4ffb-b978-4a0e85f8975c'] = $pane;
    $display->panels['main'][0] = 'new-3755d2b9-7c99-4ffb-b978-4a0e85f8975c';
    $pane = new stdClass();
    $pane->pid = 'new-1d7ca243-e7ee-44da-867f-d38ab4dd7869';
    $pane->panel = 'main';
    $pane->type = 'proud_panels_pane_font_size';
    $pane->subtype = 'proud_panels_pane_font_size';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element' => 'li',
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
    $pane->uuid = '1d7ca243-e7ee-44da-867f-d38ab4dd7869';
    $display->content['new-1d7ca243-e7ee-44da-867f-d38ab4dd7869'] = $pane;
    $display->panels['main'][1] = 'new-1d7ca243-e7ee-44da-867f-d38ab4dd7869';
    $pane = new stdClass();
    $pane->pid = 'new-bde61cd3-b620-4855-85f3-5dfa6c1dc5fa';
    $pane->panel = 'main';
    $pane->type = 'proud_panels_translate';
    $pane->subtype = 'proud_panels_translate';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element' => 'li',
        'attributes' => array(
          'class' => '',
          'id' => '',
        ),
      ),
      'style' => 'custom',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bde61cd3-b620-4855-85f3-5dfa6c1dc5fa';
    $display->content['new-bde61cd3-b620-4855-85f3-5dfa6c1dc5fa'] = $pane;
    $display->panels['main'][2] = 'new-bde61cd3-b620-4855-85f3-5dfa6c1dc5fa';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-3755d2b9-7c99-4ffb-b978-4a0e85f8975c';
  $mini->display = $display;
  $export['footer_actions'] = $mini;

  return $export;
}
