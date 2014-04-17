<?php

/**
 * @file
 * Contains webform_views_select_handler
 */

/**
 * The plugin that handles webform_views_select_handler
 */
class webform_views_select_handler extends views_plugin_display {

  /**
   * {@inheritdoc}
   */
  public function execute() {
    return $this->view->render();
  }
}

