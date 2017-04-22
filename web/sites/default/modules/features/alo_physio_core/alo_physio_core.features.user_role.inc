<?php
/**
 * @file
 * alo_physio_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function alo_physio_core_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: publisher.
  $roles['publisher'] = array(
    'name' => 'publisher',
    'weight' => 3,
  );

  return $roles;
}