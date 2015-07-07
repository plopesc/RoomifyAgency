<?php
/**
 * @file
 * agency_location.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agency_location_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'location';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Location';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Location';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_location';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'nothing';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['icon']['iconUrl'] = '[node:nid]';
  $handler->display->display_options['style_options']['icon']['iconSize']['x'] = '25';
  $handler->display->display_options['style_options']['icon']['iconSize']['y'] = '41';
  $handler->display->display_options['style_options']['icon']['iconAnchor']['x'] = '12';
  $handler->display->display_options['style_options']['icon']['iconAnchor']['y'] = '41';
  $handler->display->display_options['style_options']['icon']['shadowAnchor']['x'] = '41';
  $handler->display->display_options['style_options']['icon']['shadowAnchor']['y'] = '41';
  $handler->display->display_options['style_options']['icon']['popupAnchor']['x'] = '1';
  $handler->display->display_options['style_options']['icon']['popupAnchor']['y'] = '-34';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Unit */
  $handler->display->display_options['fields']['field_unit']['id'] = 'field_unit';
  $handler->display->display_options['fields']['field_unit']['table'] = 'field_data_field_unit';
  $handler->display->display_options['fields']['field_unit']['field'] = 'field_unit';
  $handler->display->display_options['fields']['field_unit']['label'] = '';
  $handler->display->display_options['fields']['field_unit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_unit']['alter']['text'] = 'to';
  $handler->display->display_options['fields']['field_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_unit']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_unit']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Get directions';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'getdirections/location/to/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong>[title]</strong> <br />
[field_address]<br />[field_availability_calendar]<br />
[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'location' => 'location',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'location';
  $export['location'] = $view;

  $view = new view();
  $view->name = 'rooms_location';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'rooms_units';
  $view->human_name = 'Rooms Location';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Property Locations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_location';
  $handler->display->display_options['style_options']['name_field'] = 'name';
  $handler->display->display_options['style_options']['description_field'] = 'nothing';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['icon']['iconUrl'] = 'sites/all/modules/features/agency_location/images/markerto.png';
  $handler->display->display_options['style_options']['icon']['iconSize']['x'] = '25';
  $handler->display->display_options['style_options']['icon']['iconSize']['y'] = '41';
  $handler->display->display_options['style_options']['icon']['iconAnchor']['x'] = '12';
  $handler->display->display_options['style_options']['icon']['iconAnchor']['y'] = '41';
  $handler->display->display_options['style_options']['icon']['shadowAnchor']['x'] = '41';
  $handler->display->display_options['style_options']['icon']['shadowAnchor']['y'] = '41';
  $handler->display->display_options['style_options']['icon']['popupAnchor']['x'] = '1';
  $handler->display->display_options['style_options']['icon']['popupAnchor']['y'] = '-34';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  /* Field: Unit ID for name link */
  $handler->display->display_options['fields']['unit_id_1']['id'] = 'unit_id_1';
  $handler->display->display_options['fields']['unit_id_1']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['unit_id_1']['field'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id_1']['ui_name'] = 'Unit ID for name link';
  $handler->display->display_options['fields']['unit_id_1']['label'] = '';
  $handler->display->display_options['fields']['unit_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['unit_id_1']['separator'] = '';
  /* Field: Bookable Units: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a href ="property/[unit_id_1]">[name]</a>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Bookable Units: Availability Calendar */
  $handler->display->display_options['fields']['field_availability_calendar']['id'] = 'field_availability_calendar';
  $handler->display->display_options['fields']['field_availability_calendar']['table'] = 'field_data_field_availability_calendar';
  $handler->display->display_options['fields']['field_availability_calendar']['field'] = 'field_availability_calendar';
  $handler->display->display_options['fields']['field_availability_calendar']['label'] = '';
  $handler->display->display_options['fields']['field_availability_calendar']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_availability_calendar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_availability_calendar']['type'] = 'rooms_availability_reference_modal';
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong>[name]</strong><br />
[field_address]<br />
[field_availability_calendar]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Bookable Units: Rooms Availability */
  $handler->display->display_options['filters']['availability']['id'] = 'availability';
  $handler->display->display_options['filters']['availability']['table'] = 'rooms_units';
  $handler->display->display_options['filters']['availability']['field'] = 'availability';
  $handler->display->display_options['filters']['availability']['value'] = array(
    'rooms_start_date' => DateTime::__set_state(array(
       'date' => '2014-11-12 00:00:00.000000',
       'timezone_type' => 3,
       'timezone' => 'Europe/Berlin',
    )),
    'rooms_end_date' => DateTime::__set_state(array(
       'date' => '2014-11-19 00:00:00.000000',
       'timezone_type' => 3,
       'timezone' => 'Europe/Berlin',
    )),
    'group_size' => '4',
  );
  $handler->display->display_options['filters']['availability']['exposed'] = TRUE;
  $handler->display->display_options['filters']['availability']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['availability']['expose']['operator'] = 'availability_op';
  $handler->display->display_options['filters']['availability']['expose']['identifier'] = 'availability';
  $handler->display->display_options['filters']['availability']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['availability']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Bookable Units: Area (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_area_tid']['expose']['operator_id'] = 'field_area_tid_op';
  $handler->display->display_options['filters']['field_area_tid']['expose']['label'] = 'Property Area';
  $handler->display->display_options['filters']['field_area_tid']['expose']['operator'] = 'field_area_tid_op';
  $handler->display->display_options['filters']['field_area_tid']['expose']['identifier'] = 'location';
  $handler->display->display_options['filters']['field_area_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'location';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'rooms-location';

  /* Display: Map pane */
  $handler = $view->new_display('panel_pane', 'Map pane', 'content_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: List pane */
  $handler = $view->new_display('panel_pane', 'List pane', 'list_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bookable Units: Property Image */
  $handler->display->display_options['fields']['field_property_image']['id'] = 'field_property_image';
  $handler->display->display_options['fields']['field_property_image']['table'] = 'field_data_field_property_image';
  $handler->display->display_options['fields']['field_property_image']['field'] = 'field_property_image';
  $handler->display->display_options['fields']['field_property_image']['label'] = '';
  $handler->display->display_options['fields']['field_property_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_property_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_property_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Unit ID for name link */
  $handler->display->display_options['fields']['unit_id_1']['id'] = 'unit_id_1';
  $handler->display->display_options['fields']['unit_id_1']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['unit_id_1']['field'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id_1']['ui_name'] = 'Unit ID for name link';
  $handler->display->display_options['fields']['unit_id_1']['label'] = '';
  $handler->display->display_options['fields']['unit_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['unit_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['unit_id_1']['separator'] = '';
  /* Field: Bookable Units: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a href ="property/[unit_id_1]">[name]</a>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Bookable Units: Availability Calendar */
  $handler->display->display_options['fields']['field_availability_calendar']['id'] = 'field_availability_calendar';
  $handler->display->display_options['fields']['field_availability_calendar']['table'] = 'field_data_field_availability_calendar';
  $handler->display->display_options['fields']['field_availability_calendar']['field'] = 'field_availability_calendar';
  $handler->display->display_options['fields']['field_availability_calendar']['label'] = '';
  $handler->display->display_options['fields']['field_availability_calendar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_availability_calendar']['type'] = 'rooms_availability_reference_modal';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['rooms_location'] = $view;

  return $export;
}
