<?php
/**
 * @file
 * alo_physio_practicioners.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function alo_physio_practicioners_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create practitioner content'.
  $permissions['create practitioner content'] = array(
    'name' => 'create practitioner content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any practitioner content'.
  $permissions['delete any practitioner content'] = array(
    'name' => 'delete any practitioner content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own practitioner content'.
  $permissions['delete own practitioner content'] = array(
    'name' => 'delete own practitioner content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any practitioner content'.
  $permissions['edit any practitioner content'] = array(
    'name' => 'edit any practitioner content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
      'seo admin' => 'seo admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own practitioner content'.
  $permissions['edit own practitioner content'] = array(
    'name' => 'edit own practitioner content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
    ),
    'module' => 'node',
  );

  return $permissions;
}
