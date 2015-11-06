<?php

/**
 * @file
 * Default template for admin toolbar.
 *
 * Available variables:
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default value has the following:
 *   - toolbar: The current template type, i.e., "theming hook".
 * - $toolbar['toolbar_user']: User account / logout links.
 * - $toolbar['toolbar_menu']: Top level management menu links.
 * - $toolbar['toolbar_drawer']: A place for extended toolbar content.
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
<nav class="navbar navbar-proud navbar-fixed-top" id="proud-navbar">
  <!-- Brand and toggle get grouped for better mobile display -->

  <div class="navbar-header">
    <button class="navbar-toggle" data-target="#navbar-collapse" data-toggle="collapse" type="button"><span class="sr-only">Toggle navigation</span> <span class="icon-bar"></span> <span class="icon-bar"></span> <span class="icon-bar"></span></button>
    <a class="dropdown-toggle navbar-brand pull-left" id="proud-home-bar" data-toggle="dropdown" aria-expanded="true"><?php print render($toolbar['toolbar_proud_image']); ?></a>
    <?php print render($toolbar['toolbar_proudcity']); ?>
  </div><!-- /.navbar-header -->
  <!-- Collect the nav links, forms, and other content for toggling -->
  <div class="collapse navbar-collapse" id="navbar-collapse">
    <div class="navigation" id="proud-menu">
      <?php print render($toolbar['toolbar_home']); ?>
      <div class="pull-right">
        <ul class="nav navbar-nav">
          <li><?php print $toolbar['toolbar_user_picture']; ?></li>  
          <li class="dropdown">
              <a class="dropdown-toggle" id="proud-city-user" data-toggle="dropdown" aria-expanded="true">
                <?php print $toolbar['toolbar_user_name']; ?>
                <span class="caret"></span>
              </a>
              <?php print str_replace('class="menu', 'aria-labelledby="proud-city-user" class="menu dropdown-menu', render($toolbar['toolbar_user_menu'])); ?>
          </li>
        </ul>
      </div>
      <?php print str_replace('class="menu', 'id="proud-navbar-main-menu" class="menu navbar-nav', render($toolbar['toolbar_menu'])); ?>
      <ul id="proud-toolbar-new" class="nav navbar-nav">
        <li class="dropdown">
            <a class="dropdown-toggle" id="proud-city-new" data-toggle="dropdown" aria-expanded="true">
              <?php print $toolbar['toolbar_content_label']; ?>
              <span class="caret"></span>
            </a>
            <?php print render($toolbar['toolbar_content']); ?>
        </li>
      </ul>
    </div><!-- /#secondary-menu -->
  </div><!-- /.navbar-collapse -->
</nav>
