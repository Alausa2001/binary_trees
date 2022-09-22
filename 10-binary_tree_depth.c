#include "binary_trees.h"
/**
 * binary_tree_depth - calculates the depth of a tree
 * @tree: pointer to the node whose depth is to be determined
 * Return: if the tree doesn't exist it returns 0  else the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL || binary_tree_is_root(tree))
		return (0);
	while (tree->parent != NULL)
	{
		count += 1;
		tree = tree->parent;
	}
	return (count);
}

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: pointer to the node to check
 * Return: 1 if node is a root else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	node = node->parent;
	if (node == NULL)
		return (1);
	return (0);
}
