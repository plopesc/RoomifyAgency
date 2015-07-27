<?php
/**
 * @file
 * agency_units.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function agency_units_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_units__bnb';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'units';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'BnB',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'User from Bookable Units (on Bookable Units: Owner [field_owner])',
        'keyword' => 'user',
        'name' => 'entity_from_field:field_owner-rooms_unit-user',
        'delta' => 0,
        'context' => 'argument_entity_id:rooms_unit_1',
        'id' => 1,
      ),
    ),
    'name' => 'bnb',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_sidebar_left';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
    'top' => array(
      'style' => 'naked',
    ),
    'bottom' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2bbc432f-e1b5-4182-80c4-eae04d339c9c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-212461f5-5082-4df2-9235-b45a37883438';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'rooms_unit:field_availability_calendar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'rooms_availability_reference_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:rooms_unit_1',
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
    $pane->uuid = '212461f5-5082-4df2-9235-b45a37883438';
    $display->content['new-212461f5-5082-4df2-9235-b45a37883438'] = $pane;
    $display->panels['left'][0] = 'new-212461f5-5082-4df2-9235-b45a37883438';
    $pane = new stdClass();
    $pane->pid = 'new-22cef680-48af-4db9-8a6d-82b1ee9dc993';
    $pane->panel = 'left';
    $pane->type = 'user_profile';
    $pane->subtype = 'user_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'relationship_entity_from_field:field_owner-rooms_unit-user_1',
      'override_title' => 1,
      'override_title_text' => 'About the Owner',
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
    $pane->uuid = '22cef680-48af-4db9-8a6d-82b1ee9dc993';
    $display->content['new-22cef680-48af-4db9-8a6d-82b1ee9dc993'] = $pane;
    $display->panels['left'][1] = 'new-22cef680-48af-4db9-8a6d-82b1ee9dc993';
    $pane = new stdClass();
    $pane->pid = 'new-fd813419-52fc-4736-8984-e80e0d473414';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'property_reviews';
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
    $pane->uuid = 'fd813419-52fc-4736-8984-e80e0d473414';
    $display->content['new-fd813419-52fc-4736-8984-e80e0d473414'] = $pane;
    $display->panels['left'][2] = 'new-fd813419-52fc-4736-8984-e80e0d473414';
    $pane = new stdClass();
    $pane->pid = 'new-13dd069a-25e4-414e-bd71-b3082d82feed';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'rrssb-rrssb';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '13dd069a-25e4-414e-bd71-b3082d82feed';
    $display->content['new-13dd069a-25e4-414e-bd71-b3082d82feed'] = $pane;
    $display->panels['left'][3] = 'new-13dd069a-25e4-414e-bd71-b3082d82feed';
    $pane = new stdClass();
    $pane->pid = 'new-194cdaec-64d7-4dc5-a47c-a78df89b3f65';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'rooms_booking_manager-rooms_availability_search';
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
    $pane->uuid = '194cdaec-64d7-4dc5-a47c-a78df89b3f65';
    $display->content['new-194cdaec-64d7-4dc5-a47c-a78df89b3f65'] = $pane;
    $display->panels['right'][0] = 'new-194cdaec-64d7-4dc5-a47c-a78df89b3f65';
    $pane = new stdClass();
    $pane->pid = 'new-bfa12b07-e189-4c01-b71e-6376b0d7c66c';
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
    $pane->uuid = 'bfa12b07-e189-4c01-b71e-6376b0d7c66c';
    $display->content['new-bfa12b07-e189-4c01-b71e-6376b0d7c66c'] = $pane;
    $display->panels['right'][1] = 'new-bfa12b07-e189-4c01-b71e-6376b0d7c66c';
    $pane = new stdClass();
    $pane->pid = 'new-e32eb570-a1cb-4383-9a99-5334e0024d1f';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'rooms_unit:field_property_gallery';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'nivo_formatter',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'nivo_formatter_theme' => 'default',
        'nivo_formatter_image_style' => 'property_slider',
        'nivo_slider_thumbnail' => array(
          'controlNavThumbs' => TRUE,
          'thumbnail_style' => 'thumbnail',
        ),
        'nivo_formatter_nivo_slider' => array(
          'effect' => array(
            'sliceDownLeft' => 'sliceDownLeft',
          ),
          'slices' => '15',
          'boxCols' => '8',
          'boxRows' => '4',
          'animSpeed' => '500',
          'pauseTime' => '3000',
          'startSlide' => '0',
          'directionNav' => '1',
          'directionNavHide' => TRUE,
          'controlNav' => TRUE,
          'keyboardNav' => TRUE,
          'pauseOnHover' => TRUE,
          'manualAdvance' => 0,
          'captionOpacity' => '0.8',
          'prevText' => 'Prev',
          'nextText' => 'Next',
        ),
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:rooms_unit_1',
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
    $pane->uuid = 'e32eb570-a1cb-4383-9a99-5334e0024d1f';
    $display->content['new-e32eb570-a1cb-4383-9a99-5334e0024d1f'] = $pane;
    $display->panels['top'][0] = 'new-e32eb570-a1cb-4383-9a99-5334e0024d1f';
    $pane = new stdClass();
    $pane->pid = 'new-c6764ba7-3eed-4a92-bd26-4ba29e4709d6';
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
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c6764ba7-3eed-4a92-bd26-4ba29e4709d6';
    $display->content['new-c6764ba7-3eed-4a92-bd26-4ba29e4709d6'] = $pane;
    $display->panels['top'][1] = 'new-c6764ba7-3eed-4a92-bd26-4ba29e4709d6';
    $pane = new stdClass();
    $pane->pid = 'new-a0a5f054-b842-4024-af32-5d0b515dfff4';
    $pane->panel = 'top';
    $pane->type = 'token';
    $pane->subtype = 'rooms_unit:flag-favorite-link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_entity_id:rooms_unit_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
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
    $pane->uuid = 'a0a5f054-b842-4024-af32-5d0b515dfff4';
    $display->content['new-a0a5f054-b842-4024-af32-5d0b515dfff4'] = $pane;
    $display->panels['top'][2] = 'new-a0a5f054-b842-4024-af32-5d0b515dfff4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e32eb570-a1cb-4383-9a99-5334e0024d1f';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_units__bnb'] = $handler;

  return $export;
}
