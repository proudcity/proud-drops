<?php
/**
 * @file
 * Template for Radix Bryant Flipped.
 *
 * Variables:
 * - $classes: Optional CSS classes to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */

// For the sidebar, we want to hide it completely if its just IPE placeholder content.
// @todo Better way to do this that doesn't break IPE???
$sidebar_test = str_replace(array('Sidebar', 'Region style', 'Add new pane'), '', strip_tags($content['sidebar']));
$sidebar_test = (strlen($sidebar_test) > 15);

$footer_test = str_replace(array('Footer', 'Region style', 'Add new pane'), '', strip_tags($content['footer']));
$footer_test = (strlen($footer_test) > 15);

?>


<div class="panel-display clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  
  <?php if(!empty($content['banner'])): ?>
    <div class="row panel-banner">
      <div class="col-xs-12">
        <?php print $content['banner']; ?>
      </div>
    </div>
  <?php endif; ?>
  
  
  <div class="container spacing">

    <div class="row">

      <?php if($sidebar_test): ?>
        <div class="col-md-3 padding-md-right">
          <?php print $content['sidebar']; ?>
        </div>
      <?php endif; ?>

      <div class="col-md-<?php if(!$sidebar_test): ?>12<?php else: ?>9<?php endif;?>">

        <?php if(!empty($content['top'])): ?>
          <div class="row panel-content-top">
            <div class="col-xs-12">
              <?php print $content['top']; ?>
            </div>
          </div>
        <?php endif; ?>

        <?php if(!empty($content['divider1'])): ?>
          <div class="row panel-divider1">
            <div class="col-xs-12">
              <?php print $content['divider1']; ?>
            </div>
          </div>
        <?php endif; ?>

        <?php if(!empty($content['divider2'])): ?>
          <div class="row panel-divider2">
            <div class="col-xs-12">
              <?php print $content['divider2']; ?>
            </div>
          </div>
        <?php endif; ?>

        <?php if(!empty($content['tri1']) || !empty($content['tri2']) || !empty($content['tri3'])): ?>
          <div class="row panel-tri">
            <div class="col-md-4 panel-col-tri1">
              <?php if(!empty($content['tri1'])): ?><?php print $content['tri1']; ?><?php endif; ?>
            </div>
            <div class="col-md-4 panel-col-tri2">
              <?php if(!empty($content['tri2'])): ?><?php print $content['tri2']; ?><?php endif; ?>
            </div>
            <div class="col-md-4 panel-col-tri3">
              <?php if(!empty($content['tri3'])): ?><?php print $content['tri3']; ?><?php endif; ?>
            </div>
          </div><!--/row-->
        <?php endif; ?>

        <?php if(!empty($content['divider3'])): ?>
          <div class="row panel-divider3">
            <div class="col-xs-12">
              <?php print $content['divider3']; ?>
            </div>
          </div>
        <?php endif; ?>

        <?php if(!empty($content['col1']) || !empty($content['col2'])): ?>
          <div class="row panel-columns">
            <div class="col-md-6 panel-col1">
              <?php if(!empty($content['col1'])): ?><?php print $content['col1']; ?><?php endif; ?>
            </div>
            <div class="col-md-6 panel-col2">
              <?php if(!empty($content['col2'])): ?><?php print $content['col2']; ?><?php endif; ?>
            </div>
          </div><!--/row-->
        <?php endif; ?>

        <?php if(!empty($content['divider4'])): ?>
          <div class="row panel-divider4">
            <div class="col-xs-12">
              <?php print $content['divider4']; ?>
            </div>
          </div>
        <?php endif; ?>

        <?php if(!empty($content['bottom'])): ?>
          <div class="row panel-content-bottom">
            <div class="col-sm-12">
              <?php print $content['bottom']; ?>
            </div>
          </div><!--/row-->
        <?php endif; ?>

      </div> <!-- /.col -->

    </div> <!-- /.row -->

  </div> <!-- /.container -->


  <?php if(TRUE)://$footer_test): ?>
    <div class="row panel-footer-footer">
      <div class="col-xs-12">
        <?php print $content['footer']; ?>
      </div>
    </div>
  <?php endif; ?>

</div>
