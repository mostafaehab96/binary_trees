#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a node in binary tree
 * @tree: the node to be measured
 * Return: the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
