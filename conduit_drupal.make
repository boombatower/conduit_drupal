; Drush Make (http://drupal.org/project/drush_make)
api = 2

; Drupal core

core = 7.x
projects[drupal] = 7

; Dependencies

projects[conduit][type] = module
projects[conduit][download][type] = git
projects[conduit][download][url] = git@git.boombatower.com:reviewdriven/modules/conduit

projects[views] = 3
