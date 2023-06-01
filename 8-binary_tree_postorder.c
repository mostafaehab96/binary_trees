#include "binary_trees.h"

/**
 * binary_tree_postorder - prints the binary tree in postorder
 * @tree: the binary tree
 * @func: a function pointer to be used to print the node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

