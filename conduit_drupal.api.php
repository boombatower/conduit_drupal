<?php
/**
 * @file
 * Document conduit_drupal hooks.
 *
 * @author Jimmy Berry ("boombatower", http://drupal.org/user/214218)
 */

/**
 * Generate result summary message based on totals.
 *
 * @param $total
 *   Array of item type totals.
 * @return
 *   Result summary message.
 */
function hook_conduit_drupal_result_message($total) {
  return t('@type0 type 0, @type1 type 1, and @type2 type 2 messages.', array(
    '@type0' => $total[0],
    '@type1' => $total[1],
    '@type2' => $total[2],
  ));
}
