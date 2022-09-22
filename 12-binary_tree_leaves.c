#include "binary_trees.h"
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

/**
 * binary_tree_leaves - this function counts the number of leaves
 * in a binary tree/subtree
 * @tree: the root of the tree
 * Return: the no of leaf nodes, if the tree doesn't exist return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count_r, count_l;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	if (tree != NULL)
	{
		count_r = binary_tree_leaves(tree->right);
		count_l = binary_tree_leaves(tree->left);
		return (count_r + count_l);
	}
	return (0);
}
