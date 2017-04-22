<?php
/**
 * @file
 * alo_physio_ailments.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function alo_physio_ailments_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'administrator' => 'administrator',
      'seo admin' => 'seo admin',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'administrator' => 'administrator',
      'seo admin' => 'seo admin',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer seotools'.
  $permissions['administer seotools'] = array(
    'name' => 'administer seotools',
    'roles' => array(
      'administrator' => 'administrator',
      'seo admin' => 'seo admin',
    ),
    'module' => 'seotools',
  );

  // Exported permission: 'create ailments content'.
  $permissions['create ailments content'] = array(
    'name' => 'create ailments content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ailments content'.
  $permissions['delete any ailments content'] = array(
    'name' => 'delete any ailments content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ailments content'.
  $permissions['delete own ailments content'] = array(
    'name' => 'delete own ailments content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ailments content'.
  $permissions['edit any ailments content'] = array(
    'name' => 'edit any ailments content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
      'seo admin' => 'seo admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ailments content'.
  $permissions['edit own ailments content'] = array(
    'name' => 'edit own ailments content',
    'roles' => array(
      'administrator' => 'administrator',
      'publisher' => 'publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'kwresearch admin page keywords'.
  $permissions['kwresearch admin page keywords'] = array(
    'name' => 'kwresearch admin page keywords',
    'roles' => array(
      'administrator' => 'administrator',
      'seo admin' => 'seo admin',
    ),
    'module' => 'kwresearch',
  );

  // Exported permission: 'kwresearch admin site keywords'.
  $permissions['kwresearch admin site keywords'] = array(
    'name' => 'kwresearch admin site keywords',
    'roles' => array(
      'administrator' => 'administrator',
      'seo admin' => 'seo admin',
    ),
    'module' => 'kwresearch',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'administrator' => 'administrator',
      'seo admin' => 'seo admin',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'perform content analysis'.
  $permissions['perform content analysis'] = array(
    'name' => 'perform content analysis',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contentanalysis',
  );

  return $permissions;
}
