<?php

/**
 * @file
 * Contains WebformViewsSelectStyle.
 */

/**
 * The style plugin for Webform Views Select.
 */
class WebformViewsSelectStyle extends views_plugin_style_mapping {

  /**
   * Implements views_plugin_style_mapping::define_mapping().
   */
  public function define_mapping() {
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

  /**
   * Implements views_plugin_style::validate().
   */
  public function validate() {
    $errors = parent::validate();

    // The master display is of type 'default'.
    if ($this->display->display_plugin != 'webform_select' && $this->display->display_plugin != 'default') {
      $errors[] = t("%display: the 'Webform Select List' format requires a display of type 'Webform Options', but it is of type %displayplugin.", array('@style' => $this->definition['title'], '%displayplugin' => $this->display->handler->definition['title'], '%display' => $this->display->display_title));
    }
    return $errors;
  }
}
