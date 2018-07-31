# drupal_demo
Demo site for my contrib modules

## Installation

- Go into the root and run:

`php -d memory_limit=-1 /usr/local/bin/composer install`

- Now, add the site to vhosts or add a new site in DevDesktop

- Then:

`cd web/sites/default;`

`chmod 777 ../default;`

`chmod 777 settings.php;`

Stick this into your settings.php

```
$config_directories = array(
  CONFIG_SYNC_DIRECTORY => '../config/sync',
);
```

Install the site

`drush si -y standard --site-name="Demo site" --account-pass=demo;`

or using Drupal Console

`drupal site:install standard --account-pass="demo" --no-interaction`

- Run this to import the config.

`drush cset "system.site" uuid "$(drush cget system.site uuid --source=sync --format=list)" -y;`
`drush cim -y;`

or using Drupal Console

```
drupal -n --override init                                                                                                                  drupal settings:set environment dev
drupal settings:set overrides.config.skip-validate-site-uuid true                                  

drupal config:import
````

- Enable site core

`drush en -y site_core;`

## Running tests

`php core/scripts/run-tests.sh --color --concurrency "31" --directory modules/contrib --dburl mysql://drupaluser@127.0.0.1:33067/drupal8_demo --verbose`

## Installation with Drupal console
Build the site
`php -d memory_limit=-1 /usr/local/bin/composer update `

Run server and tests
`drupal demo`

