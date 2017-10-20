#!/bin/bash
set +x

function f_install_site() {
  echo "[INFO] Installing Drupal"
  drush si -y drupal_demo --db-url=sqlite://sites/default/files/.ht.sqlite --account-name=admin --account-pass=demo --sites-subdir=default

  # Enable modules
  drush en -y site_core, simpletest
}

f_install_site

echo Done
