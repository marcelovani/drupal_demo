; drush make --no-core --no-gitinfofile --contrib-destination=. -y update.make
core = 7.x

api = 2
projects[drupal][version] = "7.34"

projects[captcha_keypad][type] = "module"
projects[captcha_keypad][download][type] = "git"
projects[captcha_keypad][download][url] = "http://git.drupal.org/project/captcha_keypad.git"
projects[captcha_keypad][download][revision] = "33955106b3d3a33e18d23e208dc89939789662ad  "
projects[captcha_keypad][subdir] = "contrib"
