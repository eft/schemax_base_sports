<?php
/**
 * @file
 * schemax_base_sports.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function schemax_base_sports_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
