<?php
/**
 * @file
 * proud_input_formats.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function proud_input_formats_ckeditor_profile_defaults() {
  $data = array(
    'Advanced' => array(
      'name' => 'Advanced',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Source\'],
    [\'Cut\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\',\'-\',\'SpellChecker\', \'Scayt\'],
    [\'Undo\',\'Redo\',\'Find\',\'Replace\',\'-\',\'SelectAll\'],
    [\'Image\',\'Media\',\'Flash\',\'Table\',\'HorizontalRule\',\'Smiley\',\'SpecialChar\'],
    [\'Maximize\', \'ShowBlocks\'],
    \'/\',
    [\'Format\'],
    [\'Bold\',\'Italic\',\'Underline\',\'Strike\',\'-\',\'Subscript\',\'Superscript\',\'-\',\'RemoveFormat\'],
    [\'NumberedList\',\'BulletedList\',\'-\',\'Outdent\',\'Indent\',\'Blockquote\'],
    [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'JustifyBlock\',\'-\',\'BidiLtr\',\'BidiRtl\'],
    [\'Link\',\'Unlink\',\'Anchor\',\'Linkit\']
]
    ',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
        ),
      ),
      'input_formats' => array(),
    ),
    'Basic' => array(
      'name' => 'Basic',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Source\',\'-\',\'Format\',\'Bold\',\'Italic\',\'-\',\'NumberedList\',\'BulletedList\',\'-\',\'Link\',\'Unlink\',\'-\',\'Image\',\'WidgetTemplateMenu\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => 'p a div span h2 h3 h4 h5 h6 section article iframe object embed strong b i em cite pre blockquote small sub sup code ul ol li dl dt dd table thead tbody th tr td img caption mediawrapper br[href,src,target,width,height,colspan,span,alt,name,title,class,id,data-options]{text-align,float,margin}(*);',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '%tcss/ckeditor.css',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'ckfinder',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'angularMedia' => array(
            'name' => 'angularMedia',
            'desc' => 'Plugin for Angular Media Browser',
            'path' => '%base_path%'.drupal_get_path('module', 'angular_media').'/plugins/angularMedia/',
            'buttons' => FALSE,
          ),
          'autogrow' => array(
            'name' => 'autogrow',
            'desc' => 'Auto Grow plugin',
            'path' => '%editor_path%/plugins/autogrow/',
            'buttons' => FALSE,
            'default' => 'f',
            'active' => 0,
          ),
          'counter' => array(
            'name' => 'counter',
            'desc' => 'Plugin to count symbols, symbols without blanks and words',
            'path' => '%plugin_dir%counter/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'widgetbootstrap' => array(
            'name' => 'widgetbootstrap',
            'desc' => 'Plugin to add widgets based on Bootstrap elements',
            'path' => '%base_path%'.drupal_get_path('module', 'ckeditor_widgets').'/plugins/widgetbootstrap/',
            'buttons' => array(
              'widgetbootstrapLeftCol' => array(
                'icon' => 'icons/widgetbootstrapLeftCol.png',
                'label' => 'Insert left column box',
              ),
              'widgetbootstrapRightCol' => array(
                'icon' => 'icons/widgetbootstrapRightCol.png',
                'label' => 'Insert right column box',
              ),
              'widgetbootstrapTwoCol' => array(
                'icon' => 'icons/widgetbootstrapTwoCol.png',
                'label' => 'Insert two column box',
              ),
              'widgetbootstrapThreeCol' => array(
                'icon' => 'icons/widgetbootstrapThreeCol.png',
                'label' => 'Insert three column box',
              ),
              'widgetbootstrapAlert' => array(
                'icon' => 'icons/widgetbootstrapAlert.png',
                'label' => 'Insert alert box',
              ),
              'widgetbootstrapAccordion' => array(
                'icon' => 'icons/widgetbootstrapAccordion.png',
                'label' => 'Insert accordion box',
              ),
            ),
          ),
          'widgetcommon' => array(
            'name' => 'widgetcommon',
            'desc' => 'Plugin to add common widgets',
            'path' => '%base_path%'.drupal_get_path('module', 'ckeditor_widgets').'/plugins/widgetcommon/',
            'buttons' => array(
              'widgetcommonBox' => array(
                'icon' => 'icons/widgetcommonBox.png',
                'label' => 'Insert box',
              ),
              'widgetcommonQuotebox' => array(
                'icon' => 'icons/widgetcommonQuotebox.png',
                'label' => 'Insert quote box',
              ),
            ),
          ),
          'widgettemplatemenu' => array(
            'name' => 'widgettemplatemenu',
            'desc' => 'Plugin for adding an Insert Template dropdown menu',
            'path' => '%base_path%'.drupal_get_path('module', 'ckeditor_widgets').'/plugins/widgettemplatemenu/',
            'buttons' => array(
              'oembed' => array(
                'icon' => 'extraIcons/oembed.png',
                'label' => 'Insert media',
              ),
              'codeSnippet' => array(
                'icon' => 'extraIcons/codesnippet.png',
                'label' => 'Insert code snippet',
              ),
              'leaflet' => array(
                'icon' => 'extraIcons/leaflet.png',
                'label' => 'Insert leaflet map',
              ),
              'FontAwesome' => array(
                'icon' => 'extraIcons/fontawesome.png',
                'label' => 'Insert Font Awesome icon',
              ),
              'WidgetTemplateMenu' => array(
                'icon' => 'icons/widgettemplatemenu.png',
                'label' => 'Add Template Menu',
              ),
            ),
          ),
        ),
      ),
      'input_formats' => array(
        'filtered_html' => 'Filtered HTML',
      ),
    ),
    'CKEditor Global Profile' => array(
      'name' => 'CKEditor Global Profile',
      'settings' => array(
        'skin' => 'minimalist',
        'ckeditor_path' => '%l/ckeditor',
        'ckeditor_local_path' => '',
        'ckeditor_plugins_path' => '%m/plugins',
        'ckeditor_plugins_local_path' => '',
        'ckfinder_path' => '%m/plugins',
        'ckfinder_local_path' => '',
        'ckeditor_aggregate' => 'f',
        'toolbar_wizard' => 't',
        'loadPlugins' => array(),
      ),
      'input_formats' => array(),
    ),
    'Full' => array(
      'name' => 'Full',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Source\',\'-\',\'Paste\',\'PasteFromWord\',\'RemoveFormat\',\'Format\',\'Bold\',\'Italic\',\'-\',\'NumberedList\',\'BulletedList\',\'Outdent\',\'Indent\',\'-\',\'Link\',\'Unlink\',\'Anchor\',\'-\',\'Image\',\'WidgetTemplateMenu\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => 'p a div span h2 h3 h4 h5 h6 section article iframe object embed strong b i em cite pre blockquote small sub sup code ul ol li dl dt dd table thead tbody th tr td img caption mediawrapper br[href,src,target,width,height,colspan,span,alt,name,title,class,id,data-options]{text-align,float,margin}(*);',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '%tcss/ckeditor.css',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'angularMedia' => array(
            'name' => 'angularMedia',
            'desc' => 'Plugin for Angular Media Browser',
            'path' => '%base_path%'.drupal_get_path('module', 'angular_media').'/plugins/angularMedia/',
            'buttons' => FALSE,
          ),
          'counter' => array(
            'name' => 'counter',
            'desc' => 'Plugin to count symbols, symbols without blanks and words',
            'path' => '%plugin_dir%counter/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'widgetbootstrap' => array(
            'name' => 'widgetbootstrap',
            'desc' => 'Plugin to add widgets based on Bootstrap elements',
            'path' => '%base_path%'.drupal_get_path('module', 'ckeditor_widgets').'/plugins/widgetbootstrap/',
            'buttons' => array(
              'widgetbootstrapLeftCol' => array(
                'icon' => 'icons/widgetbootstrapLeftCol.png',
                'label' => 'Insert left column box',
              ),
              'widgetbootstrapRightCol' => array(
                'icon' => 'icons/widgetbootstrapRightCol.png',
                'label' => 'Insert right column box',
              ),
              'widgetbootstrapTwoCol' => array(
                'icon' => 'icons/widgetbootstrapTwoCol.png',
                'label' => 'Insert two column box',
              ),
              'widgetbootstrapThreeCol' => array(
                'icon' => 'icons/widgetbootstrapThreeCol.png',
                'label' => 'Insert three column box',
              ),
              'widgetbootstrapAlert' => array(
                'icon' => 'icons/widgetbootstrapAlert.png',
                'label' => 'Insert alert box',
              ),
              'widgetbootstrapAccordion' => array(
                'icon' => 'icons/widgetbootstrapAccordion.png',
                'label' => 'Insert accordion box',
              ),
            ),
          ),
          'widgetcommon' => array(
            'name' => 'widgetcommon',
            'desc' => 'Plugin to add common widgets',
            'path' => '%base_path%'.drupal_get_path('module', 'ckeditor_widgets').'/plugins/widgetcommon/',
            'buttons' => array(
              'widgetcommonBox' => array(
                'icon' => 'icons/widgetcommonBox.png',
                'label' => 'Insert box',
              ),
              'widgetcommonQuotebox' => array(
                'icon' => 'icons/widgetcommonQuotebox.png',
                'label' => 'Insert quote box',
              ),
            ),
          ),
          'widgettemplatemenu' => array(
            'name' => 'widgettemplatemenu',
            'desc' => 'Plugin for adding an Insert Template dropdown menu',
            'path' => '%base_path%'.drupal_get_path('module', 'ckeditor_widgets').'/plugins/widgettemplatemenu/',
            'buttons' => array(
              'oembed' => array(
                'icon' => 'extraIcons/oembed.png',
                'label' => 'Insert media',
              ),
              'codeSnippet' => array(
                'icon' => 'extraIcons/codesnippet.png',
                'label' => 'Insert code snippet',
              ),
              'leaflet' => array(
                'icon' => 'extraIcons/leaflet.png',
                'label' => 'Insert leaflet map',
              ),
              'FontAwesome' => array(
                'icon' => 'extraIcons/fontawesome.png',
                'label' => 'Insert Font Awesome icon',
              ),
              'WidgetTemplateMenu' => array(
                'icon' => 'icons/widgettemplatemenu.png',
                'label' => 'Add Template Menu',
              ),
            ),
          ),
        ),
      ),
      'input_formats' => array(
        'full_html' => 'Full HTML',
      ),
    ),
  );
  return $data;
}
