<div class="dropdown">
  <button class="btn btn-default btn-lg dropdown-toggle" type="button" id="dropdownMenu1" data-toggle="dropdown" aria-haspopup="true" aria-expanded="true">
    <?php print t('Add content'); ?>
    <span class="caret"></span>
  </button>
  <ul class="dropdown-menu" aria-labelledby="dropdownMenu1">
    <?php foreach ($types as $key=>$item): ?>
        <li><a href="<?php print url('node/add/'.$item->type); ?>">
            <i class="fa fa-<?php print $item->icon; ?>" style="color:<?php print $item->color; ?>"></i>
            <?php print $item->name; ?></a>
        </li>
    <?php endforeach; ?>
  </ul>
</div>
