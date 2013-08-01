<?php if ($message): ?>
<div class="messages <?php print $message['type']; ?>">
<?php print $message['text']; ?>
</div>
<?php endif; ?>
<dl>
<?php foreach ($schools as $nid => $data): ?>
<dt><?php print l($data['name'], 'node/' . $data['school_profile_nid']); ?></dt>
<dd>
<?php print l('View profile', 'node/' . $data['school_profile_nid']); ?>
<?php if ($data['updatable']): ?>
 / <?php print l('Edit profile', 'node/' . $data['school_profile_nid'] . '/edit'); ?>
<?php endif; ?>
<br />
<?php print l('View scores', 'schoolscores/' . $data['bcode']); ?>
<br />
<?php if ($data['aside']): ?>
  <?php print $data['aside']; ?>
<?php endif; ?>
</dd>
<?php endforeach; ?>
</dl>
