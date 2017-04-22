<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php echo '<!-- ' . str_replace('-', '\-', basename(__FILE__)) . ' -->'; ?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
     <?php print $row; ?>

<?php endforeach; ?>
<?php echo '<!-- /' . str_replace('-', '\-', basename(__FILE__)) . ' -->';