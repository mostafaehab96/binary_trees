#include "binary_trees.h"

/**
 * binary_tree_sibling - finds a sibling of a node
 * @node: the node to search for it's sibling
 * Return: the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *p;

	if (!node || !node->parent)
		return (NULL);

	p = node->parent;
	if (p->left == node)
		return (p->right);
	else
		return (p->left);
}

