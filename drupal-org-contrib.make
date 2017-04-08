; drush make -y --no-core --contrib-destination=. drupal-org-contrib.make

api = 2
core = 7.x

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc5

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.12

projects[diff][subdir] = contrib
projects[diff][version] = 3.3

projects[entity][subdir] = contrib
projects[entity][version] = 1.8

projects[features][subdir] = contrib
projects[features][version] = 2.10

projects[features_override][subdir] = contrib
projects[features_override][version] = 2.0-rc3

projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.3

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0

projects[token][subdir] = contrib
projects[token][version] = 1.7

projects[views][subdir] = contrib
projects[views][version] = 3.16

projects[nodequeue][subdir] = contrib
projects[nodequeue][version] = 2.1

projects[entitycache][subdir] = contrib
projects[entitycache][version] = 1.5

projects[xmlsitemap][subdir] = contrib
projects[xmlsitemap][version] = 2.3

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = 2.3

projects[google_analytics][subdir] = contrib
projects[google_analytics][version] = 2.3

projects[link][subdir] = contrib
projects[link][version] = 1.4

projects[linkit][subdir] = contrib
projects[linkit][version] = 3.5

projects[libraries][subdir] = contrib
projects[libraries][version] = 2.3

projects[paragraphs][subdir] = contrib
projects[paragraphs][version] = 1.0-rc5

projects[plupload][subdir] = contrib
projects[plupload][version] = 1.7

projects[context][subdir] = contrib
projects[context][version] = 3.7

projects[feeds][subdir] = contrib
projects[feeds][version] = 2.0-beta3

projects[metatag][subdir] = contrib
projects[metatag][version] = 1.21

projects[module_filter][subdir] = contrib
projects[module_filter][version] = 2.0

projects[devel][subdir] = contrib
projects[devel][version] = 1.5

projects[omega_tools][subdir] = contrib
projects[omega_tools][version] = 3.0-rc4
projects[omega_tools][type] = module

projects[omega] = 4.4
projects[omega][subdir] = contrib
projects[omega][type] = theme

projects[tao] = 3.1
projects[tao][subdir] = contrib
projects[tao][type] = theme

projects[rubik] = 4.4
projects[rubik][subdir] = contrib
projects[rubik][type] = theme

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.5/ckeditor_3.5.tar.gz

libraries[photoswipe][download][type] = get
libraries[photoswipe][download][url] = http://github.com/downloads/codecomputerlove/PhotoSwipe/code.photoswipe-3.0.5.zip

libraries[plupload][download][type] = get
libraries[plupload][download][url] = https://github.com/downloads/moxiecode/plupload/plupload_1_5_4.zip
