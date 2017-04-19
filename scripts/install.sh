#!/bin/bash
set +x

function f_install_site() {
  echo "[INFO] Installing Drupal"
  /usr/local/drush/drush si -y drupal_demo --db-url="mysql://root@localhost/drupal_demo" --site-name="Drupal demo" --account-name=admin --account-pass=demo --sites-subdir=default
  # Enable modules
  /usr/local/drush/drush en -y site_core, simpletest
}

f_install_site

echo Done
