<?php
/**
 * @file
 *
 * Describes ACL tables to Views.
 */

/**
 * Implements hook_views_data().
 */
function acl_views_views_data() {
  return array(
    'acl' => array(
      'table' => array(
        'group' => t('ACL'),
        'base' => array(
          'field' => 'acl_id',
          'title' => t('ACL'),
          'help' => t('Help! It is the ACL table!'),
          'weight' => -20,
        ),
      ),
      'acl_id' => array(
        'title' => t('acl_id'),
        'field' => array(
          'handler' => 'views_handler_field',
          'click sortable' => TRUE,
        ),
        'sort' => array(
          'handler' => 'views_handler_sort',
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_numeric',
        ),
        'argument' => array(
          'handler' => 'views_handler_argument_numeric',
        ),
      ),
    ),
    'acl_node' => array(
      'table' => array(
        'group' => t('ACL node'),
        'base' => array(
          'field' => 'acl_id',
          'title' => t('ACL node'),
          'help' => t('Help! It is the ACL node table!'),
          'weight' => -20,
        ),
        'join' => array(
          'node' => array(
            'left_field' => 'nid',
            'field' => 'nid',
          ),
          'acl' => array(
            'left_field' => 'acl_id',
            'field' => 'acl_id',
          ),
        ),
      ),
      'grant_view' => array(
        'title' => t('Grant view'),
        'field' => array(
          'handler' => 'views_handler_field_boolean',
          'click sortable' => true,
          'sort' => array(
            'handler' => 'views_handler_sort',
          ),
          'filter' => array(
            'handler' => 'views_handler_filter_boolean_operator',
            'label' => t('Can view'),
            'type' => 'yes-no',
            'use equal' => TRUE,
          ),
        ),
      ),
      'grant_update' => array(
        'title' => t('Grant update'),
        'field' => array(
          'handler' => 'views_handler_field_boolean',
          'click sortable' => true,
          'sort' => array(
            'handler' => 'views_handler_sort',
          ),
          'filter' => array(
            'handler' => 'views_handler_filter_boolean_operator',
            'label' => t('Can update'),
            'type' => 'yes-no',
            'use equal' => TRUE,
          ),
        ),
      ),
      'grant_delete' => array(
        'title' => t('Grant delete'),
        'field' => array(
          'handler' => 'views_handler_field_boolean',
          'click sortable' => true,
          'sort' => array(
            'handler' => 'views_handler_sort',
          ),
          'filter' => array(
            'handler' => 'views_handler_filter_boolean_operator',
            'label' => t('Can delete'),
            'type' => 'yes-no',
            'use equal' => TRUE,
          ),
        ),
      ),
      'acl_id' => array(
        'title' => t('ACL id'),
        'relationship' => array(
          'base' => 'acl',
          'base field' => 'acl_id',
          'handler' => 'views_handler_relationship',
          'label' => t('acl_node.acl_id -> acl.acl_id'),
          'title' => t('acl_node.acl_id -> acl.acl_id'),
          'help' => t('More information on this relationship'),
        ),
      ),
      'nid' => array(
        'title' => t('nid'),
        'relationship' => array(
          'base' => 'node',
          'base field' => 'nid',
          'handler' => 'views_handler_relationship',
          'label' => t('acl_node.nid -> node.nid'),
          'title' => t('acl_node.nid -> node.nid'),
          'help' => t('More information on this relationship'),
        ),
      ),
    ),
    'acl_user' => array(
      'table' => array(
        'group' => t('ACL user'),
        'base' => array(
          'field' => 'acl_id',
          'title' => t('ACL user'),
          'help' => t('Help! It is the ACL user table!'),
          'weight' => -20,
        ),
        'join' => array(
          'users' => array(
            'left_field' => 'uid',
            'field' => 'uid',
          ),
          'acl' => array(
            'left_field' => 'acl_id',
            'field' => 'acl_id',
          ),
        ),
      ),
      'acl_id' => array(
        'title' => t('acl_id'),
        'field' => array(
          'handler' => 'views_handler_field',
          'click sortable' => TRUE,
        ),
        'sort' => array(
          'handler' => 'views_handler_sort',
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_numeric',
        ),
        'argument' => array(
          'handler' => 'views_handler_argument_numeric',
        ),
      ),
      'uid' => array(
        'title' => t('uid'),
        'relationship' => array(
          'base' => 'users',
          'base field' => 'uid',
          'handler' => 'views_handler_relationship',
          'label' => t('acl_user.uid -> users.uid'),
          'title' => t('acl_user.uid -> users.uid'),
          'help' => t('More information on this relationship'),
        ),
      ),
    ),
  );
}
