#include "binary_trees.h"
/**
 * binary_tree_size - calculates the height of a tree
 * @tree: pointer to root node
 * Return: the size of the tree/subtree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int no_nodes;

	if (tree == NULL)
		return (0);


	if (tree != NULL)
	{
		no_nodes = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	}
	return (no_nodes);
}
