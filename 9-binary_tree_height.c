#include "binary_trees.h"
/**
 * binary_tree_height - calculates the height of a tree
 * @tree: pointer to root node
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int count_r, count_l = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	
	if (tree != NULL)
	{
		count_l = 1 + binary_tree_height(tree->left);
		count_r = 1 + binary_tree_height(tree->right);
	}
	if (count_l >= count_r)
		return (count_l);
	return (count_r);
}

