# drupal_demo
Demo site for contrib modules

Installation
============
First
$ composer install

Now, add the site to vhosts or add a new site in DevDesktop

Then
$ cd docroot
$ drush si standard --site-name="Demo site" --account-pass=demo --config-dir=../config
$ drush en -y site_core
