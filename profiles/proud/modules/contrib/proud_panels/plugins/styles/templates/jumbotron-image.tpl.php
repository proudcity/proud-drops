<div <?php print drupal_attributes($wrapper_attributes); ?>>
  <div <?php print drupal_attributes($style_attributes); ?>>
    <div class="row">
      <div class="col-lg-5 col-md-8 col-sm-8">
        <div class="jumbotron-bg">
          <?php print render($content); ?>
        </div>
      </div>
    </div>
  </div>
</div>