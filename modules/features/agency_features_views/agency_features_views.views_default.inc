<?php
/**
 * @file
 * agency_features_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agency_features_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'featured_locations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Featured Locations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Locations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Search link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Search link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'search-availability?rooms_start_date[date]&rooms_end_date[date]&group_size=2&location=[tid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Location Image */
  $handler->display->display_options['fields']['field_location_image']['id'] = 'field_location_image';
  $handler->display->display_options['fields']['field_location_image']['table'] = 'field_data_field_location_image';
  $handler->display->display_options['fields']['field_location_image']['field'] = 'field_location_image';
  $handler->display->display_options['fields']['field_location_image']['label'] = '';
  $handler->display->display_options['fields']['field_location_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_location_image']['alter']['path'] = '[nothing]';
  $handler->display->display_options['fields']['field_location_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_location_image']['element_class'] = 'unit--image';
  $handler->display->display_options['fields']['field_location_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_location_image']['settings'] = array(
    'image_style' => 'thumb_unit_search',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '[nothing]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_class'] = 'unit--name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'location' => 'location',
  );
  /* Filter criterion: Taxonomy term: Location Featured (field_location_featured) */
  $handler->display->display_options['filters']['field_location_featured_value']['id'] = 'field_location_featured_value';
  $handler->display->display_options['filters']['field_location_featured_value']['table'] = 'field_data_field_location_featured';
  $handler->display->display_options['filters']['field_location_featured_value']['field'] = 'field_location_featured_value';
  $handler->display->display_options['filters']['field_location_featured_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['featured_locations'] = $view;

  $view = new view();
  $view->name = 'featured_properties';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'rooms_units';
  $view->human_name = 'Featured Properties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Properties';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'base_price' => 'base_price',
  );
  /* Relationship: Flags: featured */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'rooms_units';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'featured';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
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
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_class'] = 'unit--name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Bookable Units: Base_price */
  $handler->display->display_options['fields']['base_price']['id'] = 'base_price';
  $handler->display->display_options['fields']['base_price']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['base_price']['field'] = 'base_price';
  $handler->display->display_options['fields']['base_price']['label'] = '';
  $handler->display->display_options['fields']['base_price']['element_type'] = 'div';
  $handler->display->display_options['fields']['base_price']['element_class'] = 'unit--price';
  $handler->display->display_options['fields']['base_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['base_price']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['base_price']['precision'] = '0';
  $handler->display->display_options['fields']['base_price']['prefix'] = '$';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'base_price' => 'base_price',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['featured_properties'] = $view;

  $view = new view();
  $view->name = 'my_bookings';
  $view->description = 'A list of all bookings';
  $view->tag = 'rooms';
  $view->base_table = 'rooms_bookings';
  $view->human_name = 'My Bookings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bookings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view own rooms_booking entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'booking_id' => 'booking_id',
    'operations' => 'operations',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'booking_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
  $handler->display->display_options['empty']['area']['content'] = 'No bookings have been created yet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Bookings: Owner */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'rooms_bookings';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Bookings: Bookings ID */
  $handler->display->display_options['fields']['booking_id']['id'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['table'] = 'rooms_bookings';
  $handler->display->display_options['fields']['booking_id']['field'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['label'] = 'Booking';
  /* Field: Bookings: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'rooms_bookings';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Customer';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Bookings: Start Date */
  $handler->display->display_options['fields']['start_date']['id'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['table'] = 'rooms_bookings';
  $handler->display->display_options['fields']['start_date']['field'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['label'] = 'Arrival';
  $handler->display->display_options['fields']['start_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['start_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['start_date']['custom_date_format'] = 'd-m-Y';
  /* Field: Bookings: End Date */
  $handler->display->display_options['fields']['end_date']['id'] = 'end_date';
  $handler->display->display_options['fields']['end_date']['table'] = 'rooms_bookings';
  $handler->display->display_options['fields']['end_date']['field'] = 'end_date';
  $handler->display->display_options['fields']['end_date']['label'] = 'Departure';
  $handler->display->display_options['fields']['end_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['end_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['end_date']['custom_date_format'] = 'd-m-Y';
  /* Field: Bookings: Unit */
  $handler->display->display_options['fields']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['table'] = 'rooms_bookings';
  $handler->display->display_options['fields']['unit_id']['field'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['hide_alter_empty'] = FALSE;
  /* Field: Bookings: Booking Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'rooms_bookings';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Type';
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Owner';
  /* Field: Bookings: Order_id */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'rooms_bookings';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = 'Order';
  $handler->display->display_options['fields']['order_id']['hide_alter_empty'] = FALSE;
  /* Field: Bookings: Operations links */
  $handler->display->display_options['fields']['operations']['id'] = 'operations';
  $handler->display->display_options['fields']['operations']['table'] = 'rooms_bookings';
  $handler->display->display_options['fields']['operations']['field'] = 'operations';
  $handler->display->display_options['fields']['operations']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Bookings: Bookings ID */
  $handler->display->display_options['sorts']['booking_id']['id'] = 'booking_id';
  $handler->display->display_options['sorts']['booking_id']['table'] = 'rooms_bookings';
  $handler->display->display_options['sorts']['booking_id']['field'] = 'booking_id';
  $handler->display->display_options['sorts']['booking_id']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/rooms/my-bookings/list';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'My Bookings';
  $handler->display->display_options['menu']['description'] = 'List of my bookings';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'My Bookings';
  $handler->display->display_options['tab_options']['description'] = 'A list of the bookings for units belonging to the current user';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';
  $export['my_bookings'] = $view;

  return $export;
}
