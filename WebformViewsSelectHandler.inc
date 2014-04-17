<?php

/**
 * @file
 * Contains WebformViewsSelectHandler.
 */

/**
 * The plugin that handles webform_views_select_handler
 */
class WebformViewsSelectHandler extends views_plugin_display {

  /**
   * {@inheritdoc}
   */
  public function execute() {
    return $this->view->render();
  }
}
