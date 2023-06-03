#include "binary_trees.h"

/**
 * height - prints the binary tree height
 * @tree: the binary tree
 * Return: the height of the tree
 */
int height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 * print_level - prints the level in a binary tree
 * @root: the root of the tree
 * @level: the level to be printed
 * @func: the function used in printing
 */
void print_level(const binary_tree_t *root, int level, void (*func)(int))
{
	if (!root)
		return;

	if (level == 1)
		func(root->n);

	else
	{
		print_level(root->left, level - 1, func);
		print_level(root->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - prints the binary tree in level order traversing
 * @tree: the tree
 * @func: function used in printing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{

	int h = height(tree);
	int i;

	for (i = 1; i <= h; i++)
	{
		print_level(tree, i, func);
	}
}
