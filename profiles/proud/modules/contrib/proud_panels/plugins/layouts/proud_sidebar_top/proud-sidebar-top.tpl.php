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
  
  <?php if(!empty($content['top'])): ?>
    <div class="row panel-content-top">
      <div class="col-sm-12">
        <?php print $content['top']; ?>
      </div>
    </div><!--/row-->
  <?php endif; ?>

  <?php if(!empty($content['sidebar']) || !empty($content['main'])): ?>
    <div class="row panel-columns">
      <div class="col-md-3">
        <?php if(!empty($content['sidebar'])): ?><?php print $content['sidebar']; ?><?php endif; ?>
      </div>
      <div class="col-md-7 col-md-push-1">
        <?php if(!empty($content['main'])): ?><?php print $content['main']; ?><?php endif; ?>
      </div>
    </div><!--/row-->
  <?php endif; ?>

  <?php if(!empty($content['bottom'])): ?>
    <div class="row panel-content-bottom">
      <div class="col-sm-12">
        <?php print $content['bottom']; ?>
      </div>
    </div><!--/row-->
  <?php endif; ?>

</div>
