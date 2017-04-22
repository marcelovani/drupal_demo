<?php
/**
 * @file
 * alo_physio_menus.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function alo_physio_menus_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer superfish'.
  $permissions['administer superfish'] = array(
    'name' => 'administer superfish',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'superfish',
  );

  return $permissions;
}
