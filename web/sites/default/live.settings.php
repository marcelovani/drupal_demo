<?php
// DB
$databases = array (
  'default' => 
  array (
    'default' => 
    array (
      'database' => 'alophysi_alo-physiotherapy',
      'username' => 'alophysi_root',
      'password' => '(S@zMmMun9t_',
      'host' => 'localhost',
      'port' => '3306',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
);

//ini_set('memory_limit','550M');
$conf['show_memcache_statistics'] = 0;
$conf['error_level'] = 0;

$conf['file_public_path'] =  'sites/www.alo-physiotherapy.co.uk/files';
$conf['image_allow_insecure_derivatives'] = TRUE;
