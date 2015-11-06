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

if(!empty($content['col1']) && !empty($content['col3'])) {
  $main_class = 'col-md-7 col-xm-10 col-xs-9 pull-left';
} elseif(empty($content['col1']) && !empty($content['col3'])) {
  $main_class = 'col-md-9 pull-left';
} elseif(!empty($content['col1']) && empty($content['col3'])) {
  $main_class = 'col-sm-10 col-xs-9';
} else {
  $main_class = 'col-sm-12';
}

?>
<div class="panel-display container clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  
  <?php if(!empty($content['top'])): ?>
    <div class="row panel-content-top">
      <div class="col-sm-12">
        <?php print $content['top']; ?>
      </div>
    </div><!--/row-->
  <?php endif; ?>

  <div class="row panel-columns">
    <?php if(!empty($content['col1'])): ?>
      <div class="col-xs-3 col-sm-2 panel-col1">
        <?php print $content['col1']; ?>
      </div>
    <?php endif; ?>

    <?php if(!empty($content['col3'])): ?>
      <div class="col-md-3 pull-right panel-col3">
        <?php print $content['col3']; ?>
      </div>
    <?php endif; ?>

    <div class="<?php print $main_class; ?>">
      <?php print $content['col2']; ?>
    </div>

  </div><!--/row--> 

</div>
