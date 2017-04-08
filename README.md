# drupal_demo
Demo site for my contrib modules

Installation
============
Go into the root and run:
`composer install`

Now, add the site to vhosts or add a new site in DevDesktop

Then:
`cd web/sites/default`

`chmod 777 ../default`

`chmod 777 settings.php`

`drush si -y standard --site-name="Demo site" --account-pass=demo`

`drush cset "system.site" uuid "$(drush cget system.site uuid --source=sync --format=list)" -y`

`drush en -y site_core`

