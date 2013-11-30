<?php
/**
 * @file
 * schemax_location_sports.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function schemax_location_sports_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-schemax_location-field_schemax_playing_surface'
  $field_instances['node-schemax_location-field_schemax_playing_surface'] = array(
    'bundle' => 'schemax_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_schemax_playing_surface',
    'label' => 'Playing Surface',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Playing Surface');

  return $field_instances;
}
