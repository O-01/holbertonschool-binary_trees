#include "binary_trees.h"

/**
 * binary_tree_node - creates binary tree node
 * @parent: pointer to parent of node to be created
 * @value: value to be stored in new node
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
