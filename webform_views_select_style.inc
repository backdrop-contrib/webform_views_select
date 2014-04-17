<?php

/**
 * @file
 * This file contains the Style Plugin Class.
 */

/**
 * The style plugin for Webform Views Select
 */
class webform_views_select_style extends views_plugin_style_mapping {

  /**
   * Implements views_plugin_style_mapping::define_mapping().
   */
  function define_mapping() {
    return array(
      'webform_select_key' => array(
        '#title' => t('Select Key'),
        '#required' => TRUE,
      ),
      'webform_select_value' => array(
        '#title' => t('Select Value'),
        '#required' => TRUE,
      ),
    );
  }
}
