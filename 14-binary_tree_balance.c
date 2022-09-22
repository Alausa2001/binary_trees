#include "binary_trees.h"
/**
 * binary_tree_balance - calculates the balance factor of a tree
 * @tree: pointer to root node
 * Return: the difference between the no_of_left_nodes and no_of_right_nodes
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int count_l = 0;
	int count_r = 0;
	const binary_tree_t *right = tree;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	while (tree != NULL)
	{
		tree = tree->left;
		count_l += 1;

	}
	count_l -= 1;
	while (right != NULL)
	{
		right = right->right;
		count_r++;
	}
	count_r -= 1;
	return (count_l - count_r);
}
