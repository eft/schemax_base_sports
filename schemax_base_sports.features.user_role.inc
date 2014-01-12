<?php
/**
 * @file
 * schemax_base_sports.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function schemax_base_sports_user_default_roles() {
  $roles = array();

  // Exported role: executive.
  $roles['executive'] = array(
    'name' => 'executive',
    'weight' => 50,
  );
  // Exported role: registrar.
  $roles['registrar'] = array(
    'name' => 'registrar',
    'weight' => 55,
  );
  // Exported role: age group coordinator.
  $roles['age group coordinator'] = array(
    'name' => 'age group coordinator',
    'weight' => 60,
  );
  // Exported role: team manager.
  $roles['team manager'] = array(
    'name' => 'team manager',
    'weight' => 65,
  );

  return $roles;
}
