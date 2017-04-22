<?php
// DB
$databases = array (
  'default' => 
  array (
    'default' => 
    array (
	    'driver' => 'mysql',
	    'database' => 'alo-physio_dev',
	    'username' => 'drupaluser',
	    'password' => '',
	    'host' => '127.0.0.1',
	    'port' => 33067
	  ),
   ),
);

$conf['show_memcache_statistics'] = 0;
//return;
// Memcache
include_once('./includes/cache.inc');
include_once('./sites/default/modules/contrib/memcache/memcache.inc');
$conf['cache_default_class'] = 'MemCacheDrupal';
$conf['memcache_key_prefix'] = 'alo-physio';

$conf['memcache_servers'] = array(
  '127.0.0.1:11211' => 'default',
);

$conf['memcache_bins'] = array(
  'cache' => 'default',
);

// Errors
$conf['error_level'] = 2;
$conf['debug_level'] = 5;

error_reporting(E_ALL);
ini_set('display_errors', TRUE);
ini_set('html_errors', TRUE);

$conf['error_level'] = 2;

$conf['file_public_path'] =  'sites/default/files';
$conf['image_allow_insecure_derivatives'] = TRUE;
