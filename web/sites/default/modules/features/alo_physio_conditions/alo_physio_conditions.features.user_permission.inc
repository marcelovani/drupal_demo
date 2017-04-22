<?php
/**
 * @file
 * alo_physio_conditions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function alo_physio_conditions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create therapies content'.
  $permissions['create therapies content'] = array(
    'name' => 'create therapies content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any therapies content'.
  $permissions['delete any therapies content'] = array(
    'name' => 'delete any therapies content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own therapies content'.
  $permissions['delete own therapies content'] = array(
    'name' => 'delete own therapies content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any therapies content'.
  $permissions['edit any therapies content'] = array(
    'name' => 'edit any therapies content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
      'seo admin' => 'seo admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own therapies content'.
  $permissions['edit own therapies content'] = array(
    'name' => 'edit own therapies content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
    ),
    'module' => 'node',
  );

  return $permissions;
}
