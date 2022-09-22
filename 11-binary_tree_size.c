#include "binary_trees.h"
/**
 * binary_tree_height - calculates the height of a tree
 * @tree: pointer to root node
 * Return: the height of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int count_no_nodes;

	if (tree == NULL)
		return (0);

	if (tree != NULL)
	{
		count_no_nodes = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	}
	return (count_no_nodes);
}
