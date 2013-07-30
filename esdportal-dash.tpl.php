<dl>
<?php foreach ($schools as $nid => $data): ?>
<dt><?php print l($data['name'], 'node/' . $data['school_profile_nid']); ?></dt>
<dd>
<?php print $data['aside']; ?>
</dd>
<?php endforeach; ?>
</dl>
