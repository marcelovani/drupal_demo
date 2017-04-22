<?php
// DB
switch ($_SERVER['HTTP_HOST']) {
   case 'alo-physiotherapy.co.uk.local':
       //local development
        $databases = array (
         'default' => 
         array (
           'default' => 
           array (
             'database' => 'alo-physio_dev',
             'username' => 'root',
             'password' => '1221',
             'host' => 'localhost',
             'port' => '3306',
             'driver' => 'mysql',
             'prefix' => '',
           ),
         ),
       );
       break;
   case 'alo-physiotherapy.gginternational.net':    
        $databases = array (
         'default' => 
         array (
           'default' => 
           array (
             'database' => 'gginter1_alo-physio7',
             'username' => 'gginter1_drupal',
             'password' => '1[(Spl-efK}A',
             'host' => 'localhost',
             'port' => '3306',
             'driver' => 'mysql',
             'prefix' => '',
           ),
         ),
       );
       break;
   default:
       //live dev
       $databases = array (
         'default' => 
         array (
           'default' => 
           array (
             'database' => 'alophysi_alo-physio_dev',
             'username' => 'alophysi_root',
             'password' => '(S@zMmMun9t_',
             'host' => 'localhost',
             'port' => '3306',
             'driver' => 'mysql',
             'prefix' => '',
           ),
         ),
       );
}

ini_set('memory_limit','550M');
$conf['show_memcache_statistics'] = 0;

// Errors
$conf['error_level'] = 2;
$conf['debug_level'] = 5;

error_reporting(E_ALL);
ini_set('display_errors', TRUE);
ini_set('html_errors', TRUE);

$conf['error_level'] = 2;

$conf['file_public_path'] =  'sites/dev.alo-physiotherapy.co.uk/files';
$conf['image_allow_insecure_derivatives'] = TRUE;

