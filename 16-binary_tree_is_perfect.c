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

/**
 * binary_tree_is_perfect - checks if the binary tree is perfect
 * @tree: tree to be checked
 * Return: 1 if perfect 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_full = 0, left, right;

	if (!tree)
		return (0);

	is_full = binary_tree_is_full(tree);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (is_full && left == right)
		return (1);
	return (0);
}
