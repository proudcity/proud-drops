<?php
// Plugin definition
$plugin = array(
  'title' => t('Right sidebar'),
  'icon' => 'right-sidebar.png',
  'category' => t('Proud advanced'),
  'theme' => 'right_sidebar',
  'regions' => array(
    'top' => t('Top content'),
    'sidebar' => t('Sidebar'),
    'main' => t('Main'),
    'bottom' => t('Bottom content'),
  ),
);
