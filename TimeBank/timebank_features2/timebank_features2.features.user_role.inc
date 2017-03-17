<?php
/**
 * @file
 * timebank_features2.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function timebank_features2_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
