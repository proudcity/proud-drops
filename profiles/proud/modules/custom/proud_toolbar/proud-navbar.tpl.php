<?php

/**
 * @file
 * Default template for site navbar.
 *
 * Available variables:
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default value has the following:
 *   - toolbar: The current template type, i.e., "theming hook".
 * - $nav['logo'], $nav['logo_second']: Logo.
 * - $nav['name']
 * - $nav['toolbar_menu']: Top level management menu links.
 * - $nav['toolbar_drawer']: A place for extended toolbar content.
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_toolbar()
 *
 * @ingroup themeable
 */
?>

<div id="navbar-external" class="navbar navbar-default navbar-external navbar-fixed-bottom" role="navigation">
  <ul id="logo-menu" class="nav navbar-nav">
    <li class="nav-logo">
      <?php print render($nav['logo']); ?>
    </li>
    <li class="nav-text">
      <?php print render($nav['name']); ?>
    </li>
  </ul>
  <div class="container-fluid menu-box">
    <div class="btn-toolbar pull-left" role="toolbar">
      <a data-proud-navbar="answers" href="#" class="btn navbar-btn faq-button"><i class="fa fa-question-circle"></i> Answers</a>
      <a data-proud-navbar="payments" href="#" class="btn navbar-btn payments-button"><i class="fa fa-credit-card"></i> Payments</a>
      <a data-proud-navbar="issue" href="#" class="btn navbar-btn issue-button"><i class="fa fa-wrench"></i> Issues</a>
    </div>
    <div class="btn-toolbar pull-right" role="toolbar">
      <a id="menu-button" href="#" class="btn navbar-btn menu-button"><span class="hamburger">
        <span>toggle menu</span>
      </span></a>
      <a data-proud-navbar="search" href="#" class="btn navbar-btn search-btn"><i class="fa fa-search"></i> <span class="text sr-only">Search</span></a>
    </div>
  </div>
  <div class="below">
    <?php print str_replace('class="menu', 'id="main-menu" class="menu nav navbar-nav', render($nav['menu'])); ?>
  </div>
</div>

<div class="navbar navbar-header-region navbar-default">
  <div class="navbar-header"><div class="container">
    <h3><?php print render($nav['logo_second']); ?><?php print render($nav['name']); ?></h3>
  </div></div>
</div>