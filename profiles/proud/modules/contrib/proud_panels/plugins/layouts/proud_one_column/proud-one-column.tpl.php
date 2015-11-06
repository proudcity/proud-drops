<?php
/**
 * @file
 * Template for Proud Layout.
 *
 * Variables:
 * - $classes: Optional CSS classes to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>
<div class="panel-display container clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <?php if(!empty($content['main'])): ?>
    <div class="row panel-one-column">
      <div class="col-sm-12">
        <?php print $content['main']; ?>
      </div>
    </div><!--/row-->
  <?php endif; ?>

</div>
