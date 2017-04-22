<?php
/**
 * @file
 * alo_physio_alliances.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function alo_physio_alliances_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create alliance content'.
  $permissions['create alliance content'] = array(
    'name' => 'create alliance content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any alliance content'.
  $permissions['delete any alliance content'] = array(
    'name' => 'delete any alliance content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own alliance content'.
  $permissions['delete own alliance content'] = array(
    'name' => 'delete own alliance content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any alliance content'.
  $permissions['edit any alliance content'] = array(
    'name' => 'edit any alliance content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
      'seo admin' => 'seo admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own alliance content'.
  $permissions['edit own alliance content'] = array(
    'name' => 'edit own alliance content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
    ),
    'module' => 'node',
  );

  return $permissions;
}
