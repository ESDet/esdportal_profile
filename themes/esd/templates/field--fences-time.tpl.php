<?php
/**
 * @file field--fences-time.tpl.php
 * Wrap each field value in the <time> element.
 *
 */
?>
<?php if ($element['#label_display'] == 'inline'): ?>
  <span class="field-label"<?php print $title_attributes; ?>>
    <?php print $label; ?>:
  </span>
<?php elseif ($element['#label_display'] == 'above'): ?>
  <h3 class="field-label"<?php print $title_attributes; ?>>
    <?php print $label; ?>
  </h3>
<?php endif; ?>

<?php foreach ($items as $delta => $item): ?>
  <time datetime="<?php print date_format_date($element['#items'][$delta]['value'], 'custom', DATE_W3C); ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
    <?php print render($item); ?>
  </time>
<?php endforeach; ?>
