<dl>
<?php foreach ($schools as $nid => $data): ?>
<dt><?php print l($data['name'], 'node/' . $data['school_profile_nid']); ?></dt>
<dd>
<?php print l('View profile', 'node/' . $data['school_profile_nid']); ?>
<?php if ($data['updatable']): ?>
 / <?php print l('Edit profile', 'node/' . $data['school_profile_nid'] . '/edit'); ?>
<?php endif; ?>
<br />
<?php print $data['aside']; ?>
</dd>
<?php endforeach; ?>
</dl>
