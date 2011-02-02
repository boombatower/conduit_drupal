; Drush Make (http://drupal.org/project/drush_make)
api = 2

; Drupal core

core = 7.x
projects[drupal] = 7

; Dependencies

projects[conduit][type] = module
projects[conduit][download][type] = git
projects[conduit][download][url] = git@git.boombatower.com:reviewdriven/modules/conduit

projects[field_group_views][type] = module
projects[field_group_views][download][type] = git
projects[field_group_views][download][url] = git@github.com:boombatower/field_group_views.git

projects[field_suppress][type] = module
projects[field_suppress][download][type] = git
projects[field_suppress][download][url] = git@github.com:boombatower/field_suppress.git

projects[views] = 3
