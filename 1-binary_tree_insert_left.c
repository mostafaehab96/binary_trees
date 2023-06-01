#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a left child in a node in binary tree
 * @parent: the parent node
 * @value: the value of the node
 * Return: the new child node or NULL if fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *p = NULL;

	if (!parent)
		return (NULL);

	if (parent->left)
		p = parent->left;

	parent->left = binary_tree_node(parent, value);
	if (p)
		parent->left->left = binary_tree_node(parent->left, p->n);

	return (parent->left);
}

