# Drupal demo
Demo site for my contrib modules

Prerequisites

- Git
- Drush
- PHP <= 5.6

## Installation

- Go to a temporary folder
`cd /tmp`

- Copy and paste this into your shell to install everything:
`curl -L -s https://goo.gl/1yuiCj | bash`

- Go inside the distro folder
`cd drupal_demo`

- Build the site
`sh scripts/build.sh [destination dir]`
The destination dir defaults to ./web

- Install the site
`cd [destination dir]`
`sh ../scripts/install.sh`

## Unassisted build
`curl -L https://goo.gl/6WdRoF | bash`
This script will automatically build the site on `drupal_demo` folder
