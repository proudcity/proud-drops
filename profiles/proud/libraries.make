; Libraries that can't be in the main drupal-org.make because they are not whitelisted.
; NOTE: These need to be listed in http://drupal.org/packaging-whitelist.
api = "2"
core = "7.x"

; CKEditor standard with the setup in libraries/ckeditor/build-config.js
; skins: minimalist
; plugins: widget, image2
libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = http://ckeditor.com/builder/download/10cea665153c5f9e622ee86605613dab

; Used heavily by Proud distro
libraries[angular][download][type] = "file"
libraries[angular][download][url] = "https://code.angularjs.org/1.4.5/angular.min.js"

; media_formatters users for lightbox for large images
libraries[ekko-lightbox][download][type] = "file"
libraries[ekko-lightbox][download][url] = "https://github.com/ashleydw/lightbox/archive/master.zip"

; media_formatters users for lightbox for responsive images
libraries[lazysizes][download][type] = "file"
libraries[lazysizes][download][url] = "https://github.com/aFarkas/lazysizes/archive/gh-pages.zip"

; select2
libraries[select2][download][type] = "file"
libraries[select2][download][url] = "https://github.com/select2/select2/archive/3.5.4.zip"

; Fullcalendar for interactive event calendar
libraries[fullcalendar][download][type] = "file"
libraries[fullcalendar][download][url] = "https://github.com/fullcalendar/fullcalendar/releases/download/v1.6.7/fullcalendar-1.6.7.zip"
