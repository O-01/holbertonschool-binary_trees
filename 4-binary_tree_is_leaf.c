#include "binary_trees.h"

/**
 * binary_tree_is_leaf - verifies if node is a leaf within binary tree
 * @node: object node within binary tree
 * Return: 1 if node is leaf, 0 upon NULL node or not a leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent && !node->left && !node->right)
		return (1);

	return (0);
}
