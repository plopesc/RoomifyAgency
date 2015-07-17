<?php

/**
 * @file
 * Rules integration for the PET To users role module.
 */

/**
 * Implements hook_rules_action_info().
 */
function pet_to_users_role_rules_action_info() {
  $roles = user_roles(TRUE);
  $actions = array(
    'pet_to_users_role_action_send_pet' => array(
      'label' => t('Send PET mail to users roles'),
      'group' => t('Previewable email templates'),
      'parameter' => array(
        'pet_name' => array(
          'type' => 'text',
          'label' => t('The previewable email template to use'),
          'options list' => 'pet_to_users_role_pet_list',
          'description' => t('The template that will be sent for this action. You can see the full list or add a new one from <a href="@url">this page</a>.', array('@url' => url('admin/structure/pets'))),
        ),
        'to_roles' => array(
          'type' => 'text',
          'label' => t('Send email to users roles'),
          'description' => t('List of users roles that will receive this email. Use the format: user_role_name_1,user_role_name_2 etc'),
          'optional' => TRUE,
          'default value' => NULL,
        ),
      ),
    ),
  );

  return $actions;
}

/**
 * Callback for eponymous rules action.
 */
function pet_to_users_role_action_send_pet($pet_name, $to_roles, $settings, $rules_state) {
  $pet = pet_load($pet_name);

  // Resolve the recipient
  if (isset($to_roles)) {
    $roles = explode(',', $to_roles);
    $mail_list = '';
    $count = 0;
    foreach ($roles as $role) {
      ++$count;
      $users = pet_to_users_role_get_users_by_role($role);
      foreach ($users as $user) {
        $mail_list .= '<' . $user->mail . '>';
        if ($count < count($roles)) {
          $mail_list .= ',';
        }
      }
    }
    $pet_to = $mail_list;
  }
  else {
    watchdog('pet', 'Mail send using %name PET failed. No recipient provided.', array('%name' => $pet_name), WATCHDOG_ERROR);
    return;
  }
  $params = array(
    'pet_from' => variable_get('site_mail', ini_get('sendmail_from')),
    'pet_to' => $pet_to,
    'rules_state' => $rules_state,
  );
  pet_send_one_mail($pet, $params);
}

/**
 * Return list of all PETs for rules configuration.
 */
function pet_to_users_role_pet_list() {
  $list = array();
  foreach (pet_load_multiple(FALSE) as $pet) {
    $list[$pet->name] = $pet->title;
  }
  return $list;
}

/**
 * Return list of all users of a role.
 *
 * @param $role_name
 *   Role name as string.
 */
function pet_to_users_role_get_users_by_role($role_name) {
  $role = user_role_load_by_name($role_name);
  $uids = db_select('users_roles', 'ur')
    ->fields('ur', array('uid'))
    ->condition('ur.rid', $role->rid, '=')
    ->execute()
    ->fetchCol();
  $users = user_load_multiple($uids);

  return $users;
}
