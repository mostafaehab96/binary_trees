#include "binary_trees.h"

/**
 * binary_tree_height - prints the binary tree height
 * @tree: the binary tree
 * Return: the height of the tree
 */
int binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree || !(tree->left || tree->right))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
