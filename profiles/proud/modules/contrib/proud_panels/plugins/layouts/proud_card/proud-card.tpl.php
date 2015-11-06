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
<?php if(!empty($content['top'])): ?>
  <?php print preg_replace('/class\=\"/', 'class="card-img-top ', $content['top'], 1); ?>
<?php endif; ?>

<?php if(!empty($content['main'])): ?>
  <div class="card-block">
    <?php print $content['main']; ?>
  </div>
<?php endif; ?>