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
	while (right != NULL)
	{
		right = right->right;
		count_r++;
	}
	return (count_l - count_r);
}
/**
 * binary_tree_is_leaf - function checks is a node is a leafnode
 * @node: pointer to the node
 * Return: 1 if node is a leafnode else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
