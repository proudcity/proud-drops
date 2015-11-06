<?php
/**
 * @file
 * proud_job.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function proud_job_taxonomy_default_vocabularies() {
  return array(
    'job_categories' => array(
      'name' => 'Job categories',
      'machine_name' => 'job_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
