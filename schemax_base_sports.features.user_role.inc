<?php
/**
 * @file
 * schemax_sports.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function schemax_sports_user_default_roles() {
  $roles = array();

  // Exported role: team manager.
  $roles['team manager'] = array(
    'name' => 'team manager',
    'weight' => 4,
  );

  return $roles;
}
