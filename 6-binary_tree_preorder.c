#include "binary_trees.h"

/**
 * binary_tree_preorder - prints the binary tree in preorder
 * @tree: the binary tree
 * @func: a function pointer to be used to print the node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

