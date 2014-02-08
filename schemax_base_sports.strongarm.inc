<?php
/**
 * @file
 * schemax_base_sports.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function schemax_base_sports_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_schemax_event_pattern';
  $strongarm->value = 'event/[node:title]';
  $export['pathauto_node_schemax_event_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_schemax_location_pattern';
  $strongarm->value = 'location/[node:title]';
  $export['pathauto_node_schemax_location_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_schemax_news_pattern';
  $strongarm->value = 'news/[node:title]';
  $export['pathauto_node_schemax_news_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_schemax_person_pattern';
  $strongarm->value = '';
  $export['pathauto_node_schemax_person_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_schemax_team_pattern';
  $strongarm->value = 'team/[node:title]';
  $export['pathauto_node_schemax_team_pattern'] = $strongarm;

  return $export;
}
