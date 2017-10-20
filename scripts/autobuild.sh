#!/bin/bash
set +x

echo
echo "[Info] Bootstrap is cloning the repo"

git clone --recursive --branch 7.x https://github.com/marcelovani/drupal_demo.git drupal_demo
cd drupal_demo
sh scripts/build.sh
php -S 127.0.0.1:8008

