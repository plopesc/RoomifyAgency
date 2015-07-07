<?php
/**
 * @file
 * agency_property_map.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agency_property_map_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'property_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'rooms_units';
  $view->human_name = 'Property map';
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
  $handler->display->display_options['style_options']['data_source'] = 'field_location';
  $handler->display->display_options['style_options']['name_field'] = 'field_address';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  /* Field: Bookable Units: Bookable units ID */
  $handler->display->display_options['fields']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['unit_id']['field'] = 'unit_id';
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
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
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Contextual filter: Bookable Units: Bookable units ID */
  $handler->display->display_options['arguments']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['arguments']['unit_id']['table'] = 'rooms_units';
  $handler->display->display_options['arguments']['unit_id']['field'] = 'unit_id';
  $handler->display->display_options['arguments']['unit_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['unit_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['unit_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['unit_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['unit_id']['summary_options']['items_per_page'] = '25';
  $export['property_map'] = $view;

  return $export;
}
