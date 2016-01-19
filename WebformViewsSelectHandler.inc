<?php

/**
 * @file
 * Contains WebformViewsSelectHandler.
 */

/**
 * The plugin that handles webform_views_select_handler.
 */
class WebformViewsSelectHandler extends views_plugin_display {

  /**
   * {@inheritdoc}
   */
  public function execute() {
    return $this->view->render();
  }

  /**
   * {@inheritdoc}
   */
  public function preview() {
    $rows = webform_views_select_options_from_view($this->view);
    return theme('select', array('element' => array('#options' => $rows)));
  }

  /**
   * {@inheritdoc}
   */
  public function theme_functions() {
    // Explicitly return an empty string to prevent loops.
    return array('');
  }
}
