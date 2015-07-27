<?php
/**
 * @file
 * agency_contact_form.features.inc
 */

/**
 * Implements hook_default_entityform_type().
 */
function agency_contact_form_default_entityform_type() {
  $items = array();
  $items['contact'] = entity_import('entityform_type', '{
    "type" : "contact",
    "label" : "Contact",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "rich_text" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "rich_text" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "4" : 0, "3" : 0, "5" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "rich_text" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : {
      "submit" : {
        "source" : "eform\\/submit\\/contact",
        "alias" : "contact",
        "language" : "und"
      },
      "confirm" : {
        "source" : "eform\\/contact\\/confirm",
        "alias" : "contact\\/confirm",
        "language" : "und"
      }
    }
  }');
  return $items;
}

/**
 * Implements hook_default_pet().
 */
function agency_contact_form_default_pet() {
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
    "rdf_mapping" : []
  }');
  return $items;
}
