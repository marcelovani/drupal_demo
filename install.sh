#!/bin/bash
set +x

INSTALL_DIR=$1
[ -z $INSTALL_DIR ] && echo [ERROR] You need to specify the install folder! e.g. $0 /Users/name/Sites/drupal_demo && exit 1

function f_install_drush() {
  if [ ! -d "/usr/local/drush" ]; then
    echo "[INFO] Installing Drush"
    sudo git clone --branch 7.x-5.x http://git.drupal.org/project/drush.git /usr/local/drush
    sudo /usr/local/drush/drush --version
  fi
}

function f_install_site() {
  echo "[INFO] Installing Drupal"
  /usr/local/drush/drush make --prepare-install build-drupal_demo.make ${INSTALL_DIR}
  cd ${INSTALL_DIR}/sites/default
  /usr/local/drush/drush si -y drupal_demo --db-url="mysql://root@localhost/drupal_demo" --site-name="Drupal demo" --account-name=admin --account-pass=demo --sites-subdir=default
}

f_install_drush
f_install_site

echo Done


