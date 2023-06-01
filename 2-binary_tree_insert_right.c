#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new child node at right of the parent
 * @parent: the parent node
 * @value: the value to be inserted
 * Return: the new node or NULL if fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *p = NULL;

	if (!parent)
		return (NULL);

	if (parent->right)
		p = parent->right;

	parent->right = binary_tree_node(parent, value);
	if (p)
	{
		parent->right->right = binary_tree_node(parent->right, p->n);
		free(p);
	}
	return (parent->right);
}
