<?php
/**
 * @file
 * agency_units.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agency_units_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'favorite_properties';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'rooms_units';
  $view->human_name = 'Favorite Properties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Favorite Properties';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_media_plugin_style';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Oh no, you don\'t have any favorites yet! Perhaps you\'d like to <a href="/search-availability">search for some</a>?';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Flags: favorite */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'rooms_units';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'favorite';
  /* Field: Bookable Units: Bookable units ID */
  $handler->display->display_options['fields']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['unit_id']['field'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['label'] = '';
  $handler->display->display_options['fields']['unit_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['unit_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['unit_id']['separator'] = '';
  /* Field: Bookable Units: Property Image */
  $handler->display->display_options['fields']['field_property_image']['id'] = 'field_property_image';
  $handler->display->display_options['fields']['field_property_image']['table'] = 'field_data_field_property_image';
  $handler->display->display_options['fields']['field_property_image']['field'] = 'field_property_image';
  $handler->display->display_options['fields']['field_property_image']['label'] = '';
  $handler->display->display_options['fields']['field_property_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_property_image']['element_class'] = 'unit--image';
  $handler->display->display_options['fields']['field_property_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_property_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_property_image']['settings'] = array(
    'image_style' => 'thumb_unit_search',
    'image_link' => 'content',
  );
  /* Field: Bookable Units: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'units/[unit_id]';
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_class'] = 'unit--name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_type'] = 'div';
  $handler->display->display_options['fields']['ops']['element_class'] = 'unit--favorite';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'favorite-properties';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Favorite Properties';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $export['favorite_properties'] = $view;

  $view = new view();
  $view->name = 'my_bookable_units';
  $view->description = 'A list of bookable units';
  $view->tag = 'rooms';
  $view->base_table = 'rooms_units';
  $view->human_name = 'My Bookable Units';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Bookable Units';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer rooms_unit entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'unit_id' => 'unit_id',
    'base_price' => 'base_price',
    'bookable' => 'bookable',
    'unit_id_1' => 'unit_id_1',
    'edit_unit' => 'edit_unit',
    'delete_unit' => 'delete_unit',
    'operations' => 'operations',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'unit_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'base_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'bookable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'unit_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_unit' => array(
      'align' => '',
      'separator' => '',
    ),
    'delete_unit' => array(
      'align' => '',
      'separator' => '',
    ),
    'operations' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty Message';
  $handler->display->display_options['empty']['area']['content'] = 'No bookable units have been created yet.';
  /* Relationship: Bookable Units: Owner */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'rooms_units';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Bookable Units: Bookable units ID */
  $handler->display->display_options['fields']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['unit_id']['field'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['label'] = 'ID';
  /* Field: Bookable Units: Booking Unit Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Type';
  /* Field: Bookable Units: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: Bookable Units: Base_price */
  $handler->display->display_options['fields']['base_price']['id'] = 'base_price';
  $handler->display->display_options['fields']['base_price']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['base_price']['field'] = 'base_price';
  $handler->display->display_options['fields']['base_price']['label'] = 'Base price';
  /* Field: Bookable Units: Bookable */
  $handler->display->display_options['fields']['bookable']['id'] = 'bookable';
  $handler->display->display_options['fields']['bookable']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['bookable']['field'] = 'bookable';
  /* Field: Bookable Units: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Published';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Owner';
  /* Field: Bookable Units: Link */
  $handler->display->display_options['fields']['link_unit']['id'] = 'link_unit';
  $handler->display->display_options['fields']['link_unit']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['link_unit']['field'] = 'link_unit';
  /* Field: Bookable Units: Operations links */
  $handler->display->display_options['fields']['operations']['id'] = 'operations';
  $handler->display->display_options['fields']['operations']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['operations']['field'] = 'operations';
  /* Contextual filter: Bookable Units: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'rooms_units';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Bookable Units: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'rooms_units';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/rooms/my-units/list';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'My Bookable Units List';
  $handler->display->display_options['menu']['description'] = 'A list of the units (rooms, etc) belonging to the current user';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'My Bookable Units';
  $handler->display->display_options['tab_options']['description'] = 'A list of the units (rooms, etc) belonging to the current user';
  $handler->display->display_options['tab_options']['weight'] = '-10';
  $handler->display->display_options['tab_options']['name'] = 'management';
  $export['my_bookable_units'] = $view;

  return $export;
}
