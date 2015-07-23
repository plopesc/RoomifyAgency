<?php
/**
 * @file
 * agency_homepage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agency_homepage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'unit_availability_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_units';
  $view->human_name = 'Unit Availability search';
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
  $handler->display->display_options['style_plugin'] = 'leaflet';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Field: Indexed Bookable Units: Bookable units ID */
  $handler->display->display_options['fields']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['table'] = 'search_api_index_units';
  $handler->display->display_options['fields']['unit_id']['field'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['label'] = '';
  $handler->display->display_options['fields']['unit_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['unit_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['unit_id']['separator'] = '';
  $handler->display->display_options['fields']['unit_id']['link_to_entity'] = 0;
  /* Field: Indexed Bookable Units: Property Image */
  $handler->display->display_options['fields']['field_property_image']['id'] = 'field_property_image';
  $handler->display->display_options['fields']['field_property_image']['table'] = 'search_api_index_units';
  $handler->display->display_options['fields']['field_property_image']['field'] = 'field_property_image';
  $handler->display->display_options['fields']['field_property_image']['label'] = '';
  $handler->display->display_options['fields']['field_property_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_property_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_property_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Indexed Bookable Units: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_units';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  /* Filter criterion: Indexed Bookable Units: Area */
  $handler->display->display_options['filters']['field_area']['id'] = 'field_area';
  $handler->display->display_options['filters']['field_area']['table'] = 'search_api_index_units';
  $handler->display->display_options['filters']['field_area']['field'] = 'field_area';
  $handler->display->display_options['filters']['field_area']['value'] = array();
  $handler->display->display_options['filters']['field_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_area']['expose']['operator_id'] = 'field_area_op';
  $handler->display->display_options['filters']['field_area']['expose']['label'] = 'Area';
  $handler->display->display_options['filters']['field_area']['expose']['operator'] = 'field_area_op';
  $handler->display->display_options['filters']['field_area']['expose']['identifier'] = 'location';
  $handler->display->display_options['filters']['field_area']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_area']['type'] = 'select';
  /* Filter criterion: Indexed Bookable Units: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_units';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: list view */
  $handler = $view->new_display('panel_pane', 'list view', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'list view';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Unfortunately, there are no results for your selection - please clear a filter or try different dates.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Bookable Units: Bookable units ID */
  $handler->display->display_options['fields']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['table'] = 'search_api_index_units';
  $handler->display->display_options['fields']['unit_id']['field'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['label'] = '';
  $handler->display->display_options['fields']['unit_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['unit_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['unit_id']['separator'] = '';
  $handler->display->display_options['fields']['unit_id']['link_to_entity'] = 0;
  /* Field: Indexed Bookable Units: Property Image */
  $handler->display->display_options['fields']['field_property_image']['id'] = 'field_property_image';
  $handler->display->display_options['fields']['field_property_image']['table'] = 'search_api_index_units';
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
  /* Field: Indexed Bookable Units: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_units';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_class'] = 'unit--name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_entity'] = 1;
  /* Field: Indexed Bookable Units: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'search_api_index_units';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_address']['element_class'] = 'unit--location';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Availability search */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Availability search';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/availability/nojs/[unit_id]" class="ctools-use-modal ctools-modal-rooms-responsive" title="View this unitʼs availability calendar">Check Availability</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: map view */
  $handler = $view->new_display('panel_pane', 'map view', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'map view';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'rooms_unit';
  $handler->display->display_options['style_options']['data_source'] = 'field_location';
  $handler->display->display_options['style_options']['name_field'] = 'name';
  $handler->display->display_options['style_options']['description_field'] = 'nothing_1';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['icon']['iconUrl'] = 'profiles/agency/modules/features/agency_location/images/markerto.png';
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Bookable Units: Property Image */
  $handler->display->display_options['fields']['field_property_image']['id'] = 'field_property_image';
  $handler->display->display_options['fields']['field_property_image']['table'] = 'search_api_index_units';
  $handler->display->display_options['fields']['field_property_image']['field'] = 'field_property_image';
  $handler->display->display_options['fields']['field_property_image']['label'] = '';
  $handler->display->display_options['fields']['field_property_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_property_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_property_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_property_image']['settings'] = array(
    'image_style' => 'thumb_unit_search',
    'image_link' => '',
  );
  /* Field: Indexed Bookable Units: Bookable units ID */
  $handler->display->display_options['fields']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['table'] = 'search_api_index_units';
  $handler->display->display_options['fields']['unit_id']['field'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['label'] = '';
  $handler->display->display_options['fields']['unit_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['unit_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['unit_id']['separator'] = '';
  $handler->display->display_options['fields']['unit_id']['link_to_entity'] = 0;
  /* Field: Indexed Bookable Units: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'search_api_index_units';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Indexed Bookable Units: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_units';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: Indexed Bookable Units: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'search_api_index_units';
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
  /* Field: Availability search */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Availability search';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/unit/[unit_id]" class="button">Check availability and rates</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_property_image]
  <div class="title"><a href="/unit/[unit_id]">[name]</a></div><br />
  [field_address]<br />
  [nothing]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $export['unit_availability_search'] = $view;

  return $export;
}
