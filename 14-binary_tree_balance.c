#include "binary_trees.h"
/**
 * get_no_nodes - gets the no of right and left nodes on the tree/subtree
 * @tree: pointer to the root/subroot of the tree
 * Return: the no of nodes
 */
size_t get_no_nodes(const binary_tree_t *tree)
{
	int count_l, count_r;

	if (tree == NULL)
		return (0);
	count_l = 1 + get_no_nodes(tree->left);
	count_r = 1 + get_no_nodes(tree->right);
	if (count_l >= count_r)
		return (count_l);
	return (count_r);
}

/**
 * binary_tree_balance - calculates the balance factor of a tree
 * @tree: pointer to root node
 * Return: the difference between the no_of_left_nodes and no_of_right_nodes
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int count_l, count_r;

	if (tree == NULL)
		return (0);
	count_l = get_no_nodes(tree->left);
	count_r = get_no_nodes(tree->right);
	return (count_l - count_r);
}
