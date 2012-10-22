
PROBABILISTIC WEIGHT MODULE FOR DRUPAL 7.x
------------------------------------------

CONTENTS OF THIS README
-----------------------

   * Description
   * Requirements
   * Installation
   * Support
   * Credits


DESCRIPTION
-----------

This module provides a field type in order to assign a
"probability weight" to it.

A probability weight is a float number which indicates a weight...
not a fixed weight as many other modules do, but a weight with certain
degree of randomness in order to ensure desired content appears in the
first places with some probability, but not always. This module allows
Views module to sort content in that way.

It's very useful in marketing context, where some products are desired
to be promoted, but not always, in order to avoid being annoying.

Many fields can be assigned to any entity type, so you can have not
only a unique probability weight per content, but many as desired.


REQUIREMENTS
------------

Views 3.x


INSTALLATION
------------

Just download and enable the module and a new field type called
"Probabilitic weight" will be available in "Manage fields" form
on any Entity.

Then, entity real sorting is made via Views, adding it as a sort field.


SUPPORT
-------

Donation is possible by contacting me via grisendo@gmail.com


CREDITS
-------

7.x-1.x Developed and maintained by grisendo

