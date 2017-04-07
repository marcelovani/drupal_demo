#!/bin/bash
set +x

echo
echo "[Info] Bootstrap is cloning the repo"

git clone --recursive --branch 7.x https://github.com/marcelovani/drupal_demo.git drupal_demo
cd drupal_demo

echo "[Info] Bootstrap has finished installation."
echo
echo To build Drupal demo, run:
echo sh scripts/build.sh [destination directory] (default to ./web)
