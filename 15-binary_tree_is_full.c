#include "binary_trees.h"

/**
 * binary_tree_is_full - verifies if tree has only 0 or 2 nodes
 * @tree: object tree
 * Return: 1 upon full, 0 upon NULL tree or if tree has 1 node
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->parent && tree->left && tree->right)
		return (1);

	return (0);
}
