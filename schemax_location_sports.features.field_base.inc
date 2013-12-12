<?php
/**
 * @file
 * schemax_location_sports.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function schemax_location_sports_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_schemax_playing_surfaces'
  $field_bases['field_schemax_playing_surfaces'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_schemax_playing_surfaces',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'playing_surfaces',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
