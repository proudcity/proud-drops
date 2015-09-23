Manually Building
-----------------
```
rm -r themes/contrib
rm -r modules/contrib
rm -r modules/devel
rm -r libraries


drush verify-makefile drupal-org.make
drush make --no-cache --drupal-org drupal-org.make .
drush make libraries.make . --no-core --contrib-destination=.
```
