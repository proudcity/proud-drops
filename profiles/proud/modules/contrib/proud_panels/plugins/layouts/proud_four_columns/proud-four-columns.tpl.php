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

  <div class="row">
    <div class="col-sm-6 col-md-3">
      <?php if(!empty($content['col1'])): ?><?php print $content['col1']; ?><?php endif; ?>
    </div>
    <div class="col-sm-6 col-md-3">
      <?php if(!empty($content['col2'])): ?><?php print $content['col2']; ?><?php endif; ?>
    </div>
    <div class="col-sm-6 col-md-3">
      <?php if(!empty($content['col3'])): ?><?php print $content['col3']; ?><?php endif; ?>
    </div>
    <div class="col-sm-6 col-md-3">
      <?php if(!empty($content['col4'])): ?><?php print $content['col4']; ?><?php endif; ?>
    </div>
  </div>

</div>



