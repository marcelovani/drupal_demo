#!/bin/bash
set +x

echo
echo "[Info] Bootstrap is cloning the repo"

git clone --recursive --branch master http://git.drupal.org/sandbox/marcelovani/2210081.git drupal_demo

echo "[Info] Bootstrap has finished installation."
echo
echo To install Distro run 
echo $ cd drupal_demo
echo $ ./install.sh
