<?php
/**
* Implements hook_views_plugins().
*/
function webform_views_select_views_plugins() {
  return array(
    'display' => array(
      'webform_select' => array(
        'title' => t('Webform Options'),
        'help' => t("Create a list of options for a webform select component."),
        'handler' => 'webform_views_select_handler',
        'theme' => 'views_view',
        'uses hook entity view' => TRUE,
        'use ajax' => FALSE,
        'use pager' => FALSE,
        'use more' => FALSE,
        'accept attachments' => FALSE,
        'admin' => t('Webform Options'),
      ),
    ),
  );
}