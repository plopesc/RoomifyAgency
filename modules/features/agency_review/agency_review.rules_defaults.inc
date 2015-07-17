<?php
/**
 * @file
 * agency_review.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function agency_review_default_rules_configuration() {
  $items = array();
  $items['rules_new_review_email'] = entity_import('rules_config', '{ "rules_new_review_email" : {
      "LABEL" : "New Review email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "pet", "pet_to_users_role" ],
      "ON" : { "node_insert--review" : { "bundle" : "review" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_review_property" } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "rooms_unit", "id" : [ "node:field-review-property:unit-id" ] },
            "PROVIDE" : { "entity_fetched" : { "fetched_property_entity" : "Fetched property entity" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "entity_has_field" : { "entity" : [ "fetched-property-entity" ], "field" : "field_owner" } },
              "DO" : [
                { "entity_fetch" : {
                    "USING" : { "type" : "user", "id" : [ "fetched-property-entity:field-owner:uid" ] },
                    "PROVIDE" : { "entity_fetched" : { "user_fetched_entity" : "User fetched entity" } }
                  }
                },
                { "pet_action_send_pet" : {
                    "pet_name" : "new_property_review",
                    "to_text" : "\\u003C[user-fetched-entity:mail]\\u003E",
                    "to_account" : [ "" ],
                    "account_subs" : [ "" ],
                    "node_subs" : [ "" ]
                  }
                }
              ]
            }
          ]
        },
        { "pet_to_users_role_action_send_pet" : { "pet_name" : "new_property_review", "to_roles" : "agency_owner" } }
      ]
    }
  }');
  return $items;
}
