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

/**
 * binary_tree_size - calculates the size of a binary tree
 * @tree: a pointer to the tree
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);

}

/**
 * binary_tree_is_perfect - checks if the binary tree is perfect
 * @tree: tree to be checked
 * Return: 1 if perfect 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int actual, expected, height;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	expected = (1 << (height + 1)) - 1;
	actual = binary_tree_size(tree);

	if (expected == actual)
		return (1);
	return (0);

}
