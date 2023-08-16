#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of node within binary tree
 * @tree: object node
 * Return: value corresponding to depth, 0 upon NULL tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree && tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);

	return (depth);
}
