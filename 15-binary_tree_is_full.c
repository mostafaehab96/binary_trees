#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if the binary tree is full
 * @tree: the tree to be checked
 * Return: 1 if full 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (left && right)
		return (1);
	else
		return (0);
}


