#include "binary_trees.h"

/**
 * binary_tree_node - creates a new node in binary tree
 * @parent: the parent of the node
 * @value: the integer value of the node
 * Return: the new node or NULL if fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;

	return (new);
}

