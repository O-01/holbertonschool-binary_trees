#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as left child of given parent node
 * @parent: parent node under which left child node to be inserted
 * @value: value to be stored in new node
 * Return: pointer to new node inserted at left below parent, NULL otherwise
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *lnode = NULL;

	if (!parent)
		return (NULL);

	lnode = binary_tree_node(parent, value);
	if (!lnode)
		return (NULL);

	if (parent->left)
		parent->left->parent = lnode, lnode->left = parent->left;

	parent->left = lnode;

	return (lnode);
}
