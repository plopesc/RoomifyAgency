<?php

$plugin = array(
  'title' => t('Agency availavility button'),
  'description' => t("A ctools modal button for properties availability"),
  'category' => 'Roomify agency custom',
  'icon' => '',
  'render callback' => 'agency_availability_block',
  'defaults' => array(),
);

// Render Callback.
function agency_availability_block($subtype, $conf, $panel_args, $context) {

  $node = menu_get_object();
  $url = explode('/', $_GET['q']);
  $unit_id = $url[1];

  ctools_include('modal');
  ctools_modal_add_js();

  // Adding custom css to override modal popup.
  drupal_add_css((drupal_get_path('module', 'rooms_availability_reference_modal')) . '/css/availability_popup_button.css');

  // Link to modal popup.
  $content = l(t('Check availability'), 'availability/nojs/' . $unit_id, array('attributes' => array('class' => 'ctools-use-modal ctools-modal-rooms-responsive availability-popup-button')));

  // Creating the new block containing the button.
  $block = new stdClass();
  $block->content = $content;
  $block->title = '';
  $block->id = 'roomify_agency_availability_block';

  return $block;
}
