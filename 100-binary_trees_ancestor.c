#include "binary_trees.h"

/**
 * depth - measures the depth of the node to it's root
 * @node: the node to be measured
 * Return: the depth
 */
int depth(const binary_tree_t *node)
{
	int depth = 0;

	if (!node)
		return (0);

	while (node && node->parent)
	{
		node = node->parent;
		depth++;
	}

	return (depth);
}

/**
 * binary_trees_ancestor - find the LCA of two nodes in a binary tree
 * @first: the first node
 * @second: the second node
 * Return: the LCA if found of NULL if not
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	int fdepth, sdepth;
	binary_tree_t *pfirst, *psecond;

	if (!first || !second)
		return (NULL);

	fdepth = depth(first);
	sdepth = depth(second);
	pfirst = (binary_tree_t *) first;
	psecond = (binary_tree_t *) second;

	while (fdepth > sdepth)
	{
		pfirst = pfirst->parent;
		fdepth--;
	}
	while (sdepth > fdepth)
	{
		psecond = psecond->parent;
		sdepth--;
	}


	while (pfirst != psecond)
	{
		pfirst = pfirst->parent;
		psecond = psecond->parent;

		if (!pfirst || !psecond)
			return (NULL);
	}

	return (pfirst);
}

