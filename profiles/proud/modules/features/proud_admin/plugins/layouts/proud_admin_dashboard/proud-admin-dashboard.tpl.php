<?php
/**
 * @file
 * Template for Radix Bryant Flipped.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display proud-dashboard clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <?php if(!empty($content['top'])): ?>
    <div class="content-top col-sm-12">
      <div class="row ">
        <div class="">
          <?php print $content['top']; ?>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <div class="middle col-xs-12" style="clear:both">
        <?php print $content['main']; ?>  

  </div>

  <div class="content-bottom col-xs-12">
    <div class="row region-top">
      <div class="col-md-8"><div class="panel">
        <?php print $content['bottom1']; ?>  
      </div></div>
      <div class="col-md-4"><div class="panel">
        <?php print $content['bottom2']; ?>  
      </div></div>
    </div>
  </div>

</div>
