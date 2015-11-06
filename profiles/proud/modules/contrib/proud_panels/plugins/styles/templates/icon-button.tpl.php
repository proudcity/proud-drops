<div class="card text-center"><a href="<?php print $link ?>" class="card-block card-btn">
  <?php if(!empty($icon)): ?><i class="fa <?php print $icon; ?> fa-3x"></i><?php endif; ?>
  <?php print render($content); ?>
</a></div>