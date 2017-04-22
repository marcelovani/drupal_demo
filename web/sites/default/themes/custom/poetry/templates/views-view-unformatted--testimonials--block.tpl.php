<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php echo '<!-- ' . str_replace('-', '\-', basename(__FILE__)) . ' -->'; ?>
<ul id="quotes">
<?php foreach ($rows as $id => $row): ?>
  <li<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </li>
<?php endforeach; ?>
</ul>
<?php echo '<!-- /' . str_replace('-', '\-', basename(__FILE__)) . ' -->';