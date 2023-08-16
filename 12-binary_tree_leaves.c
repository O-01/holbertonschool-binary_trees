#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves within binary tree
 * @tree: object tree
 * Return: leaf count within tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lleaf = 0, rleaf = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	lleaf = binary_tree_leaves(tree->left);
	rleaf = binary_tree_leaves(tree->right);

	return (lleaf + rleaf);
}
