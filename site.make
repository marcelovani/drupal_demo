; drush make -y --contrib-destination=. site.make

api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = 7.54

; Modules
projects[pagepreview][subdir] = "contrib"
projects[pagepreview][version] = "1.0-alpha1"

projects[custom_breadcrumbs][subdir] = "contrib"
projects[custom_breadcrumbs][version] = "2.0-beta1"

projects[active_tags][subdir] = "contrib"
projects[active_tags][version] = "2.x-dev"

projects[advagg][version] = "2.17"
projects[advagg][subdir] = contrib

projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc4"

projects[boost][subdir] = "contrib"
projects[boost][version] = "1.0"

projects[blocks_mass_cache][subdir] = "contrib"
projects[blocks_mass_cache][version] = "2.2"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.4"

projects[css_injector][subdir] = "contrib"
projects[css_injector][version] = "1.10"

projects[cache_purger][subdir] = "contrib"
projects[cache_purger][version] = "1.1"

projects[context][version] = "3.2"
projects[context][subdir] = "contrib"

projects[context_admin_exclude][subdir] = "contrib"
projects[context_admin_exclude][version] = "1.x-dev"

projects[devel][subdir] = "contrib"
projects[devel][version] = "1.5"

projects[diff][subdir] = "contrib"
projects[diff][version] = "3.2"

projects[email][subdir] = "contrib"
projects[email][version] = "1.3"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.5"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.1"

projects[entityreference_view_widget][subdir] = "contrib"
projects[entityreference_view_widget][version] = "2.0-rc1"

projects[eva][subdir] = "contrib"
projects[eva][version] = "1.2"

projects[features][subdir] = "contrib"
projects[features][version] = "2.2"

projects[google_analytics][subdir] = "contrib"
projects[google_analytics][version] = "1.4"

projects[googleanalytics_perpage][subdir] = "contrib"
projects[googleanalytics_perpage][version] = "1.0"

projects[i18n][subdir] = "contrib"
projects[i18n][version] = "1.11"

projects[i18n_access][subdir] = "contrib"
projects[i18n_access][version] = "1.x-dev"

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.4"

projects[insert][subdir] = "contrib"
projects[insert][version] = "1.3"

projects[insert_view][subdir] = "contrib"
projects[insert_view][version] = "2.0"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "3.x-dev"

projects[link][subdir] = "contrib"
projects[link][version] = "1.2"

projects[menu_block][subdir] = "contrib"
projects[menu_block][version] = "2.4"

projects[menu_clone][subdir] = "contrib"
projects[menu_clone][version] = "1.0-beta2"

projects[memcache][version] = "1.2"
projects[memcache][subdir] = "contrib"

projects[menu_token][subdir] = "contrib"
projects[menu_token][version] = "1.0-beta5"

projects[metatag][subdir] = "contrib"
projects[metatag][version] = "1.13"

projects[module_filter][subdir] = "contrib"
projects[module_filter][version] = "1.8"

projects[nodequeue][subdir] = "contrib"
projects[nodequeue][version] = "2.1"

projects[multipage_navigation][subdir] = "contrib"
projects[multipage_navigation][version] = "2.0-beta2"

projects[page_title][subdir] = "contrib"
projects[page_title][version] = "2.7"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.2"

projects[robotstxt][subdir] = "contrib"
projects[robotstxt][version] = "1.2"

projects[skinr][subdir] = "contrib"
projects[skinr][version] = "2.0"

projects[smart_paging][subdir] = "contrib"
projects[smart_paging][version] = "1.9"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[synonyms][subdir] = "contrib"
projects[synonyms][version] = "1.1"

projects[taxonomy_menu][subdir] = "contrib"
projects[taxonomy_menu][version] = "1.5"

projects[taxonomy_display][subdir] = "contrib"
projects[taxonomy_display][version] = "1.1"

projects[token][subdir] = "contrib"
projects[token][version] = "1.6"

projects[token_custom][subdir] = "contrib"
projects[token_custom][version] = "1.1"

projects[token_filter][subdir] = "contrib"
projects[token_filter][version] = "1.1"

projects[variable][subdir] = "contrib"
projects[variable][version] = "2.5"

projects[views_slideshow][subdir] = "contrib"
projects[views_slideshow][version] = "3.1"

projects[views_bulk_operations][version] = "3.3"
projects[views_bulk_operations][subdir] = contrib

projects[views][subdir] = "contrib"
projects[views][version] = "3.8"

projects[viewfield][subdir] = "contrib"
projects[viewfield][version] = "2.0"

projects[webform][subdir] = "contrib"
projects[webform][version] = "3.20"

projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][version] = "2.2"

projects[wysiwyg_boxout][subdir] = "contrib"
projects[wysiwyg_boxout][version] = "1.0"

projects[boxes][subdir] = "contrib"
projects[boxes][version] = "1.2"

projects[wysiwyg_smart_paging_seo][subdir] = "contrib"
projects[wysiwyg_smart_paging_seo][version] = "1.0"

projects[xmlsitemap][subdir] = "contrib"
projects[xmlsitemap][version] = "2.0"

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.4"

projects[flexslider][subdir] = "contrib"
projects[flexslider][version] = "2.0-rc1"

projects[eu_cookie_compliance][subdir] = "contrib"
projects[eu_cookie_compliance][version] = "1.14"

projects[imagecrop][subdir] = "contrib"
projects[imagecrop][version] = "1.0-rc3"

projects[hierarchical_select][subdir] = "contrib"
projects[hierarchical_select][version] = "3.0-beta3"

projects[ftools][type] = "module"
projects[ftools][download][type] = "git"
projects[ftools][download][url] = "https://github.com/marcelovani/ftools.git"
projects[ftools][download][revision] = "49357780e9e1d6afb35175eabe06be5de42b652c"
projects[ftools][subdir] = "contrib"
projects[ftools][patch] = https://www.drupal.org/files/issues/ftools-default_download_path-1543874-4.patch

projects[sharerich][version] = "2.4"
projects[sharerich][subdir] = "contrib"

projects[superfish][subdir] = "contrib"
projects[superfish][version] = "1.x-dev"

; Themes
projects[acquia_marina][subdir] = "contrib"
projects[acquia_marina][version] = "1.x-dev"

projects[fusion][subdir] = "contrib"
projects[fusion][version] = "2.0-beta1"

projects[kanji][subdir] = "contrib"
projects[kanji][version] = "3.6"

projects[skeletontheme][subdir] = "contrib"
projects[skeletontheme][version] = "1.4"

projects[zen][subdir] = "contrib"
projects[zen][version] = "5.5"

projects[tao][subdir] = "contrib"
projects[tao][version] = "3.1"

projects[rubik][subdir] = "contrib"
projects[rubik][version] = "4.1"

projects[seotools][version] = "1.0-alpha6"
projects[seotools][subdir] = contrib

projects[redirect][version] = "1.0-rc3"
projects[redirect][subdir] = contrib

projects[kwresearch][version] = "1.0-alpha4"
projects[kwresearch][subdir] = contrib

projects[insight][version] = "1.0-alpha2"
projects[insight][subdir] = contrib

projects[globalredirect][version] = "1.5"
projects[globalredirect][subdir] = contrib

projects[captcha_keypad][type] = "module"
projects[captcha_keypad][download][type] = "git"
projects[captcha_keypad][download][url] = "http://git.drupal.org/project/captcha_keypad.git"
projects[captcha_keypad][download][revision] = "8fb5cdb39ed15ccb286766f7a419cf106ad942b4"
projects[captcha_keypad][subdir] = "contrib"

projects[contentoptimizer][version] = "2.0-beta4"
projects[contentoptimizer][subdir] = contrib

projects[contentanalysis][version] = "1.0-beta7"
projects[contentanalysis][subdir] = contrib

projects[alchemy][version] = "1.0-beta1"
projects[alchemy][subdir] = contrib

projects[google_analytics_et][version] = "1.2"
projects[google_analytics_et][subdir] = contrib

projects[site_verify][version] = "1.1"
projects[site_verify][subdir] = contrib

; Libraries
libraries[masonry][download][type] = "get"
libraries[masonry][download][url] = "https://github.com/desandro/masonry/archive/v3.2.2.zip"
libraries[masonry][directory_name] = "masonry"
libraries[masonry][destination] = "libraries"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "libraries"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
;libraries[fancybox][download][type] = ""
;libraries[fancybox][download][url] = ""
;libraries[fancybox][directory_name] = "fancybox"
;libraries[fancybox][type] = "libraries"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
;libraries[fckeditor][download][type] = ""
;libraries[fckeditor][download][url] = ""
;libraries[fckeditor][directory_name] = "fckeditor"
;libraries[fckeditor][type] = "libraries"

libraries[jquery.cycle][download][type] = "git"
libraries[jquery.cycle][download][url] = "https://github.com/malsup/cycle.git"
libraries[jquery.cycle][directory_name] = "jquery.cycle"
libraries[jquery.cycle][type] = "libraries"

libraries[json2][type] = "libraries"
libraries[json2][download][type] = "git"
libraries[json2][directory_name] = "json2"
libraries[json2][download][url] = "https://github.com/douglascrockford/JSON-js"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
;libraries[json2][download][type] = ""
;libraries[json2][download][url] = ""
;libraries[json2][directory_name] = "json2"
;libraries[json2][type] = "libraries"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
;libraries[nicedit][download][type] = ""
;libraries[nicedit][download][url] = ""
;libraries[nicedit][directory_name] = "nicedit"
;libraries[nicedit][type] = "libraries"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
;libraries[openwysiwyg][download][type] = ""
;libraries[openwysiwyg][download][url] = ""
;libraries[openwysiwyg][directory_name] = "openwysiwyg"
;libraries[openwysiwyg][type] = "libraries"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
;libraries[patchwork][download][type] = ""
;libraries[patchwork][download][url] = ""
;libraries[patchwork][directory_name] = "patchwork"
;libraries[patchwork][type] = "libraries"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
;libraries[plupload][download][type] = ""
;libraries[plupload][download][url] = ""
;libraries[plupload][directory_name] = "plupload"
;libraries[plupload][type] = "libraries"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
;libraries[rrssb][download][type] = ""
;libraries[rrssb][download][url] = ""
;libraries[rrssb][directory_name] = "rrssb"
;libraries[rrssb][type] = "libraries"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
;libraries[superfish][download][type] = ""
;libraries[superfish][download][url] = ""
;libraries[superfish][directory_name] = "superfish"
;libraries[superfish][type] = "libraries"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
;libraries[tinymce][download][type] = ""
;libraries[tinymce][download][url] = ""
;libraries[tinymce][directory_name] = "tinymce"
;libraries[tinymce][type] = "libraries"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
;libraries[whizzywig][download][type] = ""
;libraries[whizzywig][download][url] = ""
;libraries[whizzywig][directory_name] = "whizzywig"
;libraries[whizzywig][type] = "libraries"
