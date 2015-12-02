<?php

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allow the profile to alter the site configuration form.
 */
if (!function_exists("system_form_install_configure_form_alter")) {
  function system_form_install_configure_form_alter(&$form, $form_state) {
    $form['site_information']['site_name']['#default_value'] = 'Roomify Agency';
  }
}

/**
 * Implements hook_form_alter().
 *
 * Select the current install profile by default.
 */
if (!function_exists("system_form_install_select_profile_form_alter")) {
  function system_form_install_select_profile_form_alter(&$form, $form_state) {
    foreach ($form['profile'] as $key => $element) {
      $form['profile'][$key]['#value'] = 'agency';
    }
  }
}

/**
 * Implements hook_install_tasks().
 */
function agency_install_tasks(&$install_state) {
  return array(
    'agency_create_homepage' => array(
      'display_name' => st('Homepage Configuration'),
      'type' => 'normal',
    ),
    'agency_create_pet_templates' => array(
      'display_name' => st('Creating email templates'),
      'type' => 'normal',
    ),
  );
}

/**
 * Create email templates.
 */
function agency_create_pet_templates() {
  $items = array();

  $items['contact_form'] = entity_import('pet', '{
    "name" : "contact_form",
    "title" : "Contact form",
    "subject" : "Contact form",
    "mail_body" : "test test",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : "",
    "token_entity_types" : ["node", "user"],
    "rdf_mapping" : []
  }');

  $items['property_approved'] = entity_import('pet', '{
    "name" : "property_approved",
    "title" : "Property approved",
    "subject" : "Your listing was approved!",
    "mail_body" : "Greetings, we\\u0027re happy to let you know that your listing request has been approved! You will receive a separate email with login details. Once you have logged in and set your password, you may edit your listing here: \\u003Ca href=\\u0022[site:url]admin\\/rooms\\/units\\/unit\\/[rooms_unit:unit-id]\\/edit\\u0022\\u003E[site:url]admin\\/rooms\\/units\\/unit\\/[rooms_unit:unit-id]\\/edit\\u003C\\/a\\u003E",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : "",
    "token_entity_types" : ["rooms_unit"],
    "rdf_mapping" : []
  }');

  $items['new_property_review'] = entity_import('pet', '{
    "name" : "new_property_review",
    "title" : "New Property Review",
    "subject" : "New Property Review",
    "mail_body" : "A new review has been submitted from [site:name].\\r\\n\\r\\nYou can edit and publish content at:\\r\\n[node:url]",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : "",
    "token_entity_types" : ["node", "user"],
    "rdf_mapping" : []
  }');

  $items['order_confirmation'] = entity_import('pet', '{
    "name" : "order_confirmation",
    "title" : "Order confirmation",
    "subject" : "Order [commerce-order:order-number] at [site:name]",
    "mail_body" : "Thanks for your order [commerce-order:order-number] at [site:name].\\r\\n\\r\\nIf this is your first order with us, you will receive a separate e-mail with login instructions. You can view your order history with us at any time by logging into our website at:\\r\\n\\r\\n[site:login-url]\\r\\n\\r\\nYou can find the status of your current order at:\\r\\n\\r\\n[commerce-order:customer-url]\\r\\n\\r\\nPlease contact us if you have any questions about your order.",
    "mail_body_plain" : "",
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : "",
    "token_entity_types" : ["commerce-order"],
    "rdf_mapping" : []
  }');

  $items['new_property'] = entity_import('pet', '{
    "name" : "new_property",
    "title" : "New Property",
    "subject" : "New listing created by user [rooms_unit:field-owner:name]",
    "mail_body" : "You may view the listing here: \\u003Ca href=\\u0022[site:url]admin\\/rooms\\/units\\/unit\\/[rooms_unit:unit-id]\\/edit\\u0022\\u003E[site:url]admin\\/rooms\\/units\\/unit\\/[rooms_unit:unit-id]\\/edit\\u003C\\/a\\u003E",
    "mail_body_plain" : "",
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : "",
    "token_entity_types" : [ "rooms_unit" ],
    "rdf_mapping" : []
  }');

  $items['property_updated'] = entity_import('pet', '{
    "name" : "property_updated",
    "title" : "Property updated",
    "subject" : "Listing edited by user [rooms_unit:field-owner:name]",
    "mail_body" : "You may view the listing here: \\u003Ca href=\\u0022[site:url]admin\\/rooms\\/units\\/unit\\/[rooms_unit:unit-id]\\/edit\\u0022\\u003E[site:url]admin\\/rooms\\/units\\/unit\\/[rooms_unit:unit-id]\\/edit\\u003C\\/a\\u003E",
    "mail_body_plain" : "",
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : "",
    "token_entity_types" : [ "rooms_unit" ],
    "rdf_mapping" : []
  }');

  $items['new_booking_inquiry'] = entity_import('pet', '{
    "name" : "new_booking_inquiry",
    "title" : "New Booking Inquiry",
    "subject" : "New booking enquiry received",
    "mail_body" : "\u003Cstrong\u003EYou have an enquiry regarding your listing [rooms_unit:name]!\u003C\/strong\u003E\r\n\r\n\u003Chr\/\u003E\r\n\r\n\u003Cu\u003E\u003Cstrong\u003ERequested Dates\u003Cstrong\u003E\u003C\/u\u003E\r\nArrive:  [entityform:field-enquiry-arrival-date] \r\nDepart: [entityform:field-enquiry-departure-date]. \r\n\r\n\u003Chr\/\u003E\r\n\r\nThe following message was left:\r\n[entityform:field-enquiry-further-info]\r\n\r\n\u003Chr\/\u003E\r\n\r\nby [entityform:field-enquiry-name]\r\nE-mail: [entityform:field-enquiry-email-address]\r\n\u003Chr\/\u003E\r\n\r\n\u003Cem\u003EUsing Agency Conversation you can keep the discussion onsite and create a dynamic offer for the user\u003C\/em\u003E\r\nView and respond to this enquiry here: \u003Ca href=\u0022[conversation:absolute_url]\u0022\u003E[conversation:absolute_url]\u003C\/a\u003E",
    "mail_body_plain" : "You have an enquiry regarding your listing [rooms_unit:name]!\r\n\r\nRequested Dates\r\nArrive:  [entityform:field-enquiry-arrival-date] \r\nDepart: [entityform:field-enquiry-departure-date]. \r\n\r\n\r\nThe following message was left:\r\n[entityform:field-enquiry-further-info]\r\n\r\n\r\nby [entityform:field-enquiry-name]\r\nE-mail: [entityform:field-enquiry-email-address]\r\n\r\n\r\nUsing Agency Conversation you can keep the discussion onsite and create a dynamic offer for the user\r\nView and respond to this enquiry here: \u003Ca href=\u0022[conversation:absolute_url]\u0022\u003E[conversation:absolute_url]\u003C\/a\u003E",
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : "",
    "token_entity_types" : [ "rooms_unit", "entityform" ],
    "rdf_mapping" : []
  }');

  $items['new_booking_offer'] = entity_import('pet', '{
    "name" : "new_booking_offer",
    "title" : "New Booking Offer",
    "subject" : "New offer to book [rooms_unit:name]",
    "mail_body" : "[rooms_unit:field-owner:name] has made you an offer to book [rooms_unit:name].\\r\\n\\r\\nYou may view and accept this offer here: \\u003Ca href=\\u0022[conversation:absolute_url]\\u0022\\u003E[conversation:absolute_url]\\u003C\\/a\\u003E",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : "",
    "token_entity_types" : [ "rooms_unit", "conversation" ],
    "rdf_mapping" : []
  }');

  $items['new_conversation_message'] = entity_import('pet', '{
    "name" : "new_conversation_message",
    "title" : "New conversation message",
    "subject" : "[site:name] - New message from [message:user:name]",
    "mail_body" : "[message:user:name] sent a message:\\r\\n\\r\\n\\u0022[conversation:message]\\u0022\\r\\n\\r\\nYou may view and respond to their message here: \\u003Ca href=\\u0022[conversation:absolute_url]\\u0022\\u003E[conversation:absolute_url]\\u003C\\/a\\u003E",
    "mail_body_plain" : "",
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : "",
    "token_entity_types" : [ "message", "conversation" ],
    "rdf_mapping" : []
  }');

  foreach($items as $item) {
    $item->save();
  }
}

/**
 * Create Agency homepage.
 */
function agency_create_homepage() {
  $units = agency_create_example_units();

  $file = file_get_contents(drupal_get_path('theme', 'agency_bootstrap_less') . '/images/image_01.jpg');
  $file = file_save_data($file, 'public://image_01.jpg', FILE_EXISTS_RENAME);


  $node = new stdClass();

  $node->title = 'Homepage';
  $node->type = 'landing_page';
  node_object_prepare($node);

  $node->language = LANGUAGE_NONE;
  $node->uid = 1; 
  $node->status = 1;

  $node->path['pathauto'] = 1;

  $node = node_submit($node);
  node_save($node);

  variable_set('site_frontpage', 'node/' . $node->nid);


  $paragraph = new ParagraphsItemEntity(array('field_name' => 'field_landing_page_rows', 'bundle' => 'availability_search_block'));
  $paragraph->is_new = TRUE;
  $paragraph->field_cta_class[LANGUAGE_NONE][0]['value'] = 'agency_availability_search_paragraph';
  $paragraph->field_cta_edge_to_edge[LANGUAGE_NONE][0]['value'] = 1;
  $paragraph->setHostEntity('node', $node);
  $paragraph->save();

  $field_collection_item = entity_create('field_collection_item', array('field_name' => 'eb_background'));
  $field_collection_item->setHostEntity('paragraphs_item', $paragraph);
  $field_collection_item->field_eb_image[LANGUAGE_NONE][0] = array(
    'fid' => $file->fid,
    'filename' => $file->filename,
    'filemime' => $file->filemime,
    'uid' => 1,
    'uri' => $file->uri,
    'status' => 1,
    'display' => 1,
  );
  $field_collection_item->eb_selection[LANGUAGE_NONE][0]['value'] = 'group_eb_image';
  $field_collection_item->save();


  $paragraph = new ParagraphsItemEntity(array('field_name' => 'field_landing_page_rows', 'bundle' => '3_columns_row'));
  $paragraph->is_new = TRUE;
  $paragraph->field_cta_class[LANGUAGE_NONE][0]['value'] = 'agency_3_columns_row';
  $paragraph->field_cta_edge_to_edge[LANGUAGE_NONE][0]['value'] = 0;
  $paragraph->field_cta_row_title[LANGUAGE_NONE][0]['value'] = 'Featured Properties';
  $paragraph->setHostEntity('node', $node);
  $paragraph->save();

  $first_col = new ParagraphsItemEntity(array('field_name' => 'field_first_column', 'bundle' => 'featured_property'));
  $first_col->is_new = TRUE;
  $first_col->field_cta_featured_property[LANGUAGE_NONE][0]['target_id'] = $units[0];
  $first_col->setHostEntity('paragraphs_item', $paragraph);
  $first_col->save();

  $second_col = new ParagraphsItemEntity(array('field_name' => 'field_second_column', 'bundle' => 'featured_property'));
  $second_col->is_new = TRUE;
  $second_col->field_cta_featured_property[LANGUAGE_NONE][0]['target_id'] = $units[1];
  $second_col->setHostEntity('paragraphs_item', $paragraph);
  $second_col->save();

  $third_col = new ParagraphsItemEntity(array('field_name' => 'field_third_column', 'bundle' => 'featured_property'));
  $third_col->is_new = TRUE;
  $third_col->field_cta_featured_property[LANGUAGE_NONE][0]['target_id'] = $units[2];
  $third_col->setHostEntity('paragraphs_item', $paragraph);
  $third_col->save();
}

/**
 * Create 3 example units.
 */
function agency_create_example_units() {
  $images = array(
    '1' => agency_example_images('1'),
    '2' => agency_example_images('2'),
    '3' => agency_example_images('3'),
  );

  $units = array();
      
  $unit = new RoomsUnit(
    array(
      'type' => 'listing',
      'name' => 'Ballata Villa',
      'uid' => 1,
      'default_state' => 1,
      'base_price' => '100.00',
      'min_sleeps' => '1',
      'max_sleeps' => '6',
      'field_owner' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'target_id' => 1,
          ),
        ),
      ),
      'field_property_description' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => 'This stunning villa will make you wish you never had to leave. Feel the stress melt away as you lay by the pool under the Sicilian stars.'
          ),
        ),
      ),
      'field_property_gallery' => array(
        LANGUAGE_NONE => $images[1],
      ),
      'field_property_max_capacity' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => '6',
          ),
        ),
      ),
      'field_property_bathrooms' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => '2',
          ),
        ),
      ),
      'field_property_bedrooms' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => '2',
          ),
        ),
      ),
      'field_property_double_bed' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => '2',
          ),
        ),
      ),
      'field_property_single_bed' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => '2',
          ),
        ),
      ),
      'field_property_image' => array(
        LANGUAGE_NONE => array(
          0 => $images[1][0],
        ),
      ),
    )
  );

  $unit->save();

  $units[] = $unit->unit_id;

  $unit = new RoomsUnit(
    array(
      'type' => 'listing',
      'name' => 'Apartment by the Sea',
      'uid' => 1,
      'default_state' => 1,
      'base_price' => '150.00',
      'min_sleeps' => '2',
      'max_sleeps' => '8',
      'field_owner' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'target_id' => 1,
          ),
        ),
      ),
      'field_property_description' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => 'This apartment seems to float, suspended, above the beautiful waters of the Cefalu sea front. With room for the whole family, come and enjoy everything that this area has to offer!'
          ),
        ),
      ),
      'field_property_gallery' => array(
        LANGUAGE_NONE => $images[2],
      ),
      'field_property_max_capacity' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => '8',
          ),
        ),
      ),
      'field_property_bathrooms' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => '2',
          ),
        ),
      ),
      'field_property_bedrooms' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => '3',
          ),
        ),
      ),
      'field_property_double_bed' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => '2',
          ),
        ),
      ),
      'field_property_single_bed' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => '4',
          ),
        ),
      ),
      'field_property_image' => array(
        LANGUAGE_NONE => array(
          0 => $images[2][0],
        ),
      ),
    )
  );

  $unit->save();

  $units[] = $unit->unit_id;

  $unit = new RoomsUnit(
    array(
      'type' => 'listing',
      'name' => 'Luxury Apartment',
      'uid' => 1,
      'default_state' => 1,
      'base_price' => '300.00',
      'min_sleeps' => '2',
      'max_sleeps' => '10',
      'field_owner' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'target_id' => 1,
          ),
        ),
      ),
      'field_property_description' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => 'This luxurious beachfront apartment has gorgeous sea views, and even more beautiful rooms. Come and live life the way you\'ve always wanted to, if only for a weekend.',
          ),
        ),
      ),
      'field_property_gallery' => array(
        LANGUAGE_NONE => $images[3],
      ),
      'field_property_max_capacity' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => '10',
          ),
        ),
      ),
      'field_property_bathrooms' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => '2',
          ),
        ),
      ),
      'field_property_bedrooms' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => '4',
          ),
        ),
      ),
      'field_property_double_bed' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => '4',
          ),
        ),
      ),
      'field_property_single_bed' => array(
        LANGUAGE_NONE => array(
          0 => array(
            'value' => '4',
          ),
        ),
      ),
      'field_property_image' => array(
        LANGUAGE_NONE => array(
          0 => $images[3][0],
        ),
      ),
    )
  );

  $unit->save();

  $units[] = $unit->unit_id;

  agency_save_image_crop($images[1][0]['fid'], $images[2][0]['fid'], $images[3][0]['fid']);

  return $units;
}

/**
 * Load all example images.
 */
function agency_example_images($offset) {
  $images = array();

  $files = file_scan_directory(drupal_get_path('theme', 'agency_bootstrap_less') . '/images/example/' . $offset, '/.*\.jpg$/');

  foreach ($files as $file) {
    $path = drupal_realpath($file->uri);
    $image = (object) array(
      'uid' => 1,
      'uri' => $path,
      'filemime' => file_get_mimetype($path),
      'status' => 1,
    );
    $image = file_copy($image, 'public://');

    $images[] = (array)$image;
  }

  return $images;
}

/**
 * Save crop for the 3 main images.
 */
function agency_save_image_crop($fid1, $fid2, $fid3) {
  $fid1_cords = array(
    'epsacrop-homepage_features' => array(
      'x' => 191.25,
      'y' => 0,
      'x2' => 1863.375,
      'y2' => 1285,
      'w' => 1672.125,
      'h' => 1285,
    ),
    'epsacrop-thumb_unit_search' => array(
      'x' => 0,
      'y' => 0,
      'x2' => 1920,
      'y2' => 1278.75607386,
      'w' => 1920,
      'h' => 1278.75607386,
    ),
    'epsacrop-square' => array(
      'x' => 161.25,
      'y' => 0,
      'x2' => 1447.5,
      'y2' => 1285,
      'w' => 1286.25,
      'h' => 1285,
    ),
  );

  $fid2_cords = array(
    'epsacrop-homepage_features' => array(
      'x' => 461.25,
      'y' => 498.06744868,
      'x2' => 1316.25,
      'y2' => 1154.8596887,
      'w' => 855,
      'h' => 656.792240018,
    ),
    'epsacrop-thumb_unit_search' => array(
      'x' => 438.75,
      'y' => 557.985337243,
      'x2' => 1290,
      'y2' => 1124.7086999,
      'w' => 851.25,
      'h' => 566.723362659,
    ),
    'epsacrop-square' => array(
      'x' => 468.75,
      'y' => 337.038123167,
      'x2' => 1410,
      'y2' => 1277,
      'w' => 941.25,
      'h' => 939.961876833,
    ),
  );

  $fid3_cords = array(
    'epsacrop-homepage_features' => array(
      'x' => 0,
      'y' => 0,
      'x2' => 1672.125,
      'y2' => 1285,
      'w' => 1672.125,
      'h' => 1285,
    ),
    'epsacrop-thumb_unit_search' => array(
      'x' => 0,
      'y' => 0,
      'x2' => 1920,
      'y2' => 1278.75607386,
      'w' => 1920,
      'h' => 1278.75607386,
    ),
    'epsacrop-square' => array(
      'x' => 0,
      'y' => 0,
      'x2' => 1286.25,
      'y2' => 1285,
      'w' => 1286.25,
      'h' => 1285,
    ),
  );

  _epsacrop_save_coords($fid1, drupal_json_encode(array($fid1 => $fid1_cords)));
  _epsacrop_save_coords($fid2, drupal_json_encode(array($fid2 => $fid2_cords)));
  _epsacrop_save_coords($fid3, drupal_json_encode(array($fid3 => $fid3_cords)));
}


by [entityform:field-enquiry-name]
E-mail: E-