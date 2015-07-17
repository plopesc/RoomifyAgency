<?php
/**
 * @file
 * agency_contact_form.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function agency_contact_form_default_rules_configuration() {
  $items = array();
  $items['rules_send_submission_to_all_agency_owner_users'] = entity_import('rules_config', '{ "rules_send_submission_to_all_agency_owner_users" : {
      "LABEL" : "Send Submission to all agency_owner users",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_entityform_submission" ],
      "REQUIRES" : [ "pet_to_users_role" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "DO" : [
        { "pet_to_users_role_action_send_pet" : { "pet_name" : "contact_form", "to_roles" : "agency_owner" } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  return $items;
}
