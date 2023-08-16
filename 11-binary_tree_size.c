#include "binary_trees.h"

/**
 * binary_tree_size - measures size of binary tree
 * @tree: object tree
 * Return: size value of binary tree, 0 upon NULL tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}
