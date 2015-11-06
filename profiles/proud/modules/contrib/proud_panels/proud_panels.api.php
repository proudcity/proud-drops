<?php

/**
 * @file
 * Hooks provided by Proud Panels.
 */

/**
 * Allow to alter the pane content to render.
 *
 * This happens after the keyword substitution.
 *
 * @param stdClass $categories
 *   An array including Categories and Blocks available in the Panels add Pane dialog.
 */
function hook_proud_panels_categories_alter($categories) {
  // Don't display titles.
  unset($content->title);
}
