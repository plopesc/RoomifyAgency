<?php
/**
 * @file
 * agency_property_page_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agency_property_page_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'property_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'rooms_units';
  $view->human_name = 'Property page';
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
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = '5000';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 1;
  $handler->display->display_options['style_options']['pause'] = 0;
  $handler->display->display_options['row_plugin'] = 'views_bootstrap_carousel_plugin_rows';
  $handler->display->display_options['row_options']['image'] = 'field_property_gallery';
  $handler->display->display_options['row_options']['description'] = '';
  /* Field: Bookable Units: Property Gallery */
  $handler->display->display_options['fields']['field_property_gallery']['id'] = 'field_property_gallery';
  $handler->display->display_options['fields']['field_property_gallery']['table'] = 'field_data_field_property_gallery';
  $handler->display->display_options['fields']['field_property_gallery']['field'] = 'field_property_gallery';
  $handler->display->display_options['fields']['field_property_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_property_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_property_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_property_gallery']['settings'] = array(
    'image_style' => 'property_slider',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_property_gallery']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_property_gallery']['delta_offset'] = '0';
  /* Contextual filter: Bookable Units: Bookable units ID */
  $handler->display->display_options['arguments']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['arguments']['unit_id']['table'] = 'rooms_units';
  $handler->display->display_options['arguments']['unit_id']['field'] = 'unit_id';
  $handler->display->display_options['arguments']['unit_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['unit_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['unit_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['unit_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['unit_id']['summary_options']['items_per_page'] = '25';
  $export['property_page'] = $view;

  return $export;
}
