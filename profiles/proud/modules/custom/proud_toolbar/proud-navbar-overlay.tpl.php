<?php if(!empty($overlay['answers'])): ?>
  <div id="overlay-311" class="proud-overlay proud-overlay-left">
    <?php print render($overlay['answers']); ?>
    <a id="overlay-311-close" href="#" class="proud-overlay-close close-311"><i class="fa fa-times fa-2x"></i><span class="sr-only">Close window</span></a>
  </div>
<?php endif; ?>
<?php if(!empty($overlay['search'])): ?>
  <div id="overlay-search" class="proud-overlay proud-overlay-right">
    <?php print render($overlay['search']); ?>
    <a id="overlay-search-close" href="#" class="proud-overlay-close close-search"><i class="fa fa-times fa-2x"></i><span class="sr-only">Close window</span></a>
  </div>
<?php endif; ?>

