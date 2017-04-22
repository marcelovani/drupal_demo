<?php
/* drupal */

$live_core ='/home/alophysi/public_html/drupal7_core/www/';
$ggi_core ='/home/gginter1/public_html/drupal7_core/www/';
$local_core ='/xMarcello/Development/sites/drupal_core/';

/* alo-physio */

$aliases['alo-physio-local'] = array(
'uri' => 'alo-physiotherapy.co.uk.local:8083',
'root' => $local_core,
'target-command-specific' => array(
  'sql-sync' => array(
  'enable' => array('devel', 'syslog'),
  ),
),
'path-aliases' => array(
  '%dump-dir' => 'alo-physiotherapy.co.uk/backup',
  '%files' => 'sites/default/files',
  )
);

$aliases['alo-physio-ggi'] = array(
'uri' => 'alo-physiotherapy.gginternational.net',
'root' => $ggi_core,
'path-aliases' => array(
  '%files' => 'sites/default/files',
  //'%drush' => '/home/alophysi/drush/drush',
  '%drush-script' => '/home/gginter1/drush',
  '%dump-dir' => $ggi_core . 'sites/default/backup',
  //'%custom' => '/my/custom/path',
  ),
);

$aliases['alo-physio-dev'] = array(
'uri' => 'dev.alo-physiotherapy.co.uk',
'root' => $live_core,
'path-aliases' => array(
  '%files' => 'sites/dev.alo-physiotherapy.co.uk/files',
  //'%drush' => '/home/alophysi/drush/drush',
  '%drush-script' => '/home/alophysi/drush/drush',
  //'%dump-dir' => '/path/to/dumps/',
  //'%custom' => '/my/custom/path',
  )
);

$aliases['alo-physio-live'] = array(
'uri' => 'alo-physiotherapy.co.uk',
'root' => $live_core,
'path-aliases' => array(
  '%files' => 'sites/default/files',
  '%drush-script' => '/home/alophysi/drush/drush',
  )
);

$aliases['alo-physio-dev-remote'] = $aliases['alo-physio-dev'];
$aliases['alo-physio-dev-remote']['remote-host'] = 'aloclinic.com';
$aliases['alo-physio-dev-remote']['remote-user'] = 'alophysi';

$aliases['alo-physio-ggi-remote'] = $aliases['alo-physio-ggi'];
$aliases['alo-physio-ggi-remote']['remote-host'] = '2playcasino.com';
$aliases['alo-physio-ggi-remote']['remote-user'] = 'gginter1';

$aliases['alo-physio-live-remote'] = $aliases['alo-physio-live'];
$aliases['alo-physio-live-remote']['remote-host'] = 'aloclinic.com';
$aliases['alo-physio-live-remote']['remote-user'] = 'alophysi';
