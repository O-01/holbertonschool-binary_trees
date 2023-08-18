#include "binary_trees.h"

/**
 * binary_tree_is_perfect - verifies perfect status of binary tree
 * @tree: object tree
 * Return: 1 upon perfect, 0 upon NULL tree or upon non-perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (veryPerfect(tree, binary_tree_depth(tree), 0));
}

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

/**
 * veryPerfect - verifies input binary tree for perfection recursively
 * @tree: object tree
 * @depth: depth of input tree
 * @level: level of node
 * Return: 1 upon perfect, 0 upon NULL tree or upon non-perfect
 */

int veryPerfect(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (binary_tree_balance(tree) != 0)
		return (0);

	if (!tree->left && !tree->right)
		return (depth = level + 1);

	return (veryPerfect(tree->left, depth, level + 1) &&
		veryPerfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_balance - measure balance factor of binary tree
 * @tree: object tree
 * Return: balance factor value, 0 upon NULL tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (!tree)
		return (0);

	balance = tree_height(tree->left) - tree_height(tree->right);

	return (balance);
}

/**
 * tree_height - measures height of binary tree
 * @tree: object tree
 * Return: integer height value of binary tree, 0 upon NULL tree
 */

int tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left || tree)
		left = 1 + tree_height(tree->left);

	if (tree->right || tree)
		right = 1 + tree_height(tree->right);

	return (left > right ? left : right);
}

