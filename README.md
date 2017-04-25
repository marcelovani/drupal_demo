# Drupal demo
Demo site for my contrib modules

### Prerequisites

- Git
- Drush
- PHP <= 5.6

## Building
- Clone the repo into a folder
- Build the site and run composer install/update
`cd alo-physiotherapy; composer install;`

## Install a fresh site
`cd web/core`
`drush si -y alo-physiotherapy --site-name="ALO Physiotherapy" --account-name=admin --account-pass=demo`

## Generating artifacts
`sudo /vagrant/repos/scripts/misc/generate_artifacts.sh alo-physiotherapy`

## Deploying artifacts
Copy to the server
`scp /tmp/artifacts_alo-physiotherapy_20170425.tar.gz alophysi@alo-physiotherapy.co.uk:~/tmp`
Now ssh into the server
`ssh alophysi@alo-physiotherapy.co.uk`
Move the zip file and unzip
`mkdir deploy`
`mv /tmp/artifacts_alo-physiotherapy_20170425.tar.gz ./deploy`
`cd deploy`
`tar -xvzf artifacts_alo-physiotherapy_20170425.tar.gz`
