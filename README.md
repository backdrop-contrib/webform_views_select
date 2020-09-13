Webform Views Select
======================

This module will let you populate a webform select component with data from a
view.


Requirements
------------

This module requires the following modules:

 * Webform (https://www.drupal.org/project/webform)
 * Views (https://www.drupal.org/project/views)

Installation
------------

- Install this module using the official Backdrop CMS instructions at
  https://backdropcms.org/guide/modules.

- There is no additional configuration.

Usage
-----

* Create a new view at
  - Create a "Webform Options" display
  - Select the Webform Select List format
  - Add the fields you want to use as key and value
  - Filter and sort as needed
  - In the format settings, select the field to use as key and value.

* Create or edit a webform at admin/content/webform.
  - Add a Select Options component to the webform. You should see the new
    view in the list of options under 'Load a pre-built option list'.

* Notes:
  - Do not disable this module if there are webforms that use a view from this
  module for the Select Options component. It will break the component on those
  webforms.
  - The list of options will be loaded on demand from the database, and is not
  a hard coded list. This means:
    * When the form is viewed, the component will get its data directly from the
      database, using the view.
    * If a selected item is removed from the database, or excluded from the view
      results, you will no longer see that item in the webform results.

Documentation
-------------

Additional documentation is located in the Wiki:
https://github.com/backdrop-contrib/webform_views_select/wiki/Documentation.

Issues
------

Bugs and Feature requests should be reported in the Issue Queue:
https://github.com/backdrop-contrib/webform_views_select/issues.

Current Maintainers
-------------------

- [Jen Lampton](https://github.com/jenlampton).
- Seeking additional maintainers.

Credits
-------

- Ported to Backdrop CMS by [Jen Lampton](https://github.com/jenlampton).
- Recenly Maintained for Drupal by [Steven Langenaken](https://www.drupal.org/u/stevel)
- Recenly Maintained for Drupal by [Matt Davis](https://github.com/mrjmd)
- Also Maintained for Drupal by [other generous people](https://www.drupal.org/node/1373760/committers)
- Originally written for Drupal by [Matthew Connerton](https://github.com/mrconnerton).
- Backdrop port sponsored by [NorCal Hunter Jumper Assn](https://example.com)

License
-------

This project is GPL v2 software.
See the LICENSE.txt file in this directory for complete text.

