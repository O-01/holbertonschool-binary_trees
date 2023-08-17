#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of node
 * @node: object node
 * Return: pointer to uncle node, NULL upon not found or NULL input node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	return(binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - finds sibling of node
 * @node: object node
 * Return: pointer to sibling node, NULL upon not found or NULL input node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
