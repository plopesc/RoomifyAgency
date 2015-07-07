<?php
/**
 * @file
 * agency_homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function agency_homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'property_variant';
  $page->task = 'page';
  $page->admin_title = 'Property Variant';
  $page->admin_description = '';
  $page->path = 'property/%uid';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'uid' => array(
      'id' => 1,
      'identifier' => 'Bookable Units: ID',
      'name' => 'entity_id:rooms_unit',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_property_variant_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'property_variant';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%uid:name';
  $display->uuid = '692a44a3-86b2-40e3-89da-b5d8c6bb0495';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0f21f18f-e28a-4458-8970-01a160095d8c';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'rooms_unit:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          'address' => 'address',
        ),
      ),
      'context' => 'argument_entity_id:rooms_unit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0f21f18f-e28a-4458-8970-01a160095d8c';
    $display->content['new-0f21f18f-e28a-4458-8970-01a160095d8c'] = $pane;
    $display->panels['left'][0] = 'new-0f21f18f-e28a-4458-8970-01a160095d8c';
    $pane = new stdClass();
    $pane->pid = 'new-96d73a6e-46dd-4b93-814e-c600993d5932';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'rooms_unit:field_area';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:rooms_unit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '96d73a6e-46dd-4b93-814e-c600993d5932';
    $display->content['new-96d73a6e-46dd-4b93-814e-c600993d5932'] = $pane;
    $display->panels['left'][1] = 'new-96d73a6e-46dd-4b93-814e-c600993d5932';
    $pane = new stdClass();
    $pane->pid = 'new-b181f076-c2dd-4e05-b5b1-d777720ca652';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'property_map';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'argument_entity_id:rooms_unit_1.unit-id',
      ),
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
    $pane->uuid = 'b181f076-c2dd-4e05-b5b1-d777720ca652';
    $display->content['new-b181f076-c2dd-4e05-b5b1-d777720ca652'] = $pane;
    $display->panels['left'][2] = 'new-b181f076-c2dd-4e05-b5b1-d777720ca652';
    $pane = new stdClass();
    $pane->pid = 'new-338d43cb-3dc2-403f-a4cb-0aa8c67730d9';
    $pane->panel = 'right';
    $pane->type = 'agency_availability_button';
    $pane->subtype = 'agency_availability_button';
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
    $pane->uuid = '338d43cb-3dc2-403f-a4cb-0aa8c67730d9';
    $display->content['new-338d43cb-3dc2-403f-a4cb-0aa8c67730d9'] = $pane;
    $display->panels['right'][0] = 'new-338d43cb-3dc2-403f-a4cb-0aa8c67730d9';
    $pane = new stdClass();
    $pane->pid = 'new-64f4f3e2-b2b4-4104-ae6a-b9c2e6380329';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'rooms_unit:field_property_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:rooms_unit_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '64f4f3e2-b2b4-4104-ae6a-b9c2e6380329';
    $display->content['new-64f4f3e2-b2b4-4104-ae6a-b9c2e6380329'] = $pane;
    $display->panels['right'][1] = 'new-64f4f3e2-b2b4-4104-ae6a-b9c2e6380329';
    $pane = new stdClass();
    $pane->pid = 'new-a0912514-858e-47db-9eba-3659f40e5a77';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'property_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'argument_entity_id:rooms_unit_1.unit-id',
      ),
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
    $pane->uuid = 'a0912514-858e-47db-9eba-3659f40e5a77';
    $display->content['new-a0912514-858e-47db-9eba-3659f40e5a77'] = $pane;
    $display->panels['top'][0] = 'new-a0912514-858e-47db-9eba-3659f40e5a77';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['property_variant'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_results';
  $page->task = 'page';
  $page->admin_title = 'Search Results';
  $page->admin_description = '';
  $page->path = 'search-availability';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_results__panel_context_79bfb475-e9e2-41f2-ad7b-582a75831a39';
  $handler->task = 'page';
  $handler->subtask = 'search_results';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_sidebar_left';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'right_above' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
    ),
    'right_above' => array(
      'style' => 'tabs',
    ),
    'right' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1fc17295-3d65-472c-876e-0b4b0b2118c9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bd3bf9ed-c68e-43cb-8a8b-a6025798980f';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-faQyn9jKc80cSIrzJFwyY2cPkf1OZwbu';
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
    $pane->uuid = 'bd3bf9ed-c68e-43cb-8a8b-a6025798980f';
    $display->content['new-bd3bf9ed-c68e-43cb-8a8b-a6025798980f'] = $pane;
    $display->panels['left'][0] = 'new-bd3bf9ed-c68e-43cb-8a8b-a6025798980f';
    $pane = new stdClass();
    $pane->pid = 'new-182239a2-9cbf-490a-9e18-360b671da388';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'unit_availability_search-panel_pane_1';
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
    $pane->uuid = '182239a2-9cbf-490a-9e18-360b671da388';
    $display->content['new-182239a2-9cbf-490a-9e18-360b671da388'] = $pane;
    $display->panels['right'][0] = 'new-182239a2-9cbf-490a-9e18-360b671da388';
    $pane = new stdClass();
    $pane->pid = 'new-634a7d02-fcd8-4d3f-bfe8-1e41e69da173';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'unit_availability_search-panel_pane_2';
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
    $pane->uuid = '634a7d02-fcd8-4d3f-bfe8-1e41e69da173';
    $display->content['new-634a7d02-fcd8-4d3f-bfe8-1e41e69da173'] = $pane;
    $display->panels['right'][1] = 'new-634a7d02-fcd8-4d3f-bfe8-1e41e69da173';
    $pane = new stdClass();
    $pane->pid = 'new-1dfc2296-f91e-4dc8-9c6d-38971cdcdad3';
    $pane->panel = 'top';
    $pane->type = 'homepage_search_form';
    $pane->subtype = 'homepage_search_form';
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
    $pane->uuid = '1dfc2296-f91e-4dc8-9c6d-38971cdcdad3';
    $display->content['new-1dfc2296-f91e-4dc8-9c6d-38971cdcdad3'] = $pane;
    $display->panels['top'][0] = 'new-1dfc2296-f91e-4dc8-9c6d-38971cdcdad3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1dfc2296-f91e-4dc8-9c6d-38971cdcdad3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_results'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'the_one_and_only_page';
  $page->task = 'page';
  $page->admin_title = 'The one and only page';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_the_one_and_only_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'the_one_and_only_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_one_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '78d25f7f-7c6a-44d6-a1f8-69584a2da497';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-13cb50bb-fdfa-41b6-ba18-c77749f77fc6';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'featured_locations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->uuid = '13cb50bb-fdfa-41b6-ba18-c77749f77fc6';
    $display->content['new-13cb50bb-fdfa-41b6-ba18-c77749f77fc6'] = $pane;
    $display->panels['middle'][0] = 'new-13cb50bb-fdfa-41b6-ba18-c77749f77fc6';
    $pane = new stdClass();
    $pane->pid = 'new-987b63d0-a780-4e3f-a0bc-206bd137a147';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'featured_properties';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->uuid = '987b63d0-a780-4e3f-a0bc-206bd137a147';
    $display->content['new-987b63d0-a780-4e3f-a0bc-206bd137a147'] = $pane;
    $display->panels['middle'][1] = 'new-987b63d0-a780-4e3f-a0bc-206bd137a147';
    $pane = new stdClass();
    $pane->pid = 'new-bae7e094-30af-4b5e-8d2b-c55f8695b02c';
    $pane->panel = 'top';
    $pane->type = 'homepage_search_form';
    $pane->subtype = 'homepage_search_form';
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
    $pane->uuid = 'bae7e094-30af-4b5e-8d2b-c55f8695b02c';
    $display->content['new-bae7e094-30af-4b5e-8d2b-c55f8695b02c'] = $pane;
    $display->panels['top'][0] = 'new-bae7e094-30af-4b5e-8d2b-c55f8695b02c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['the_one_and_only_page'] = $page;

  return $pages;

}
