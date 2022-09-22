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
 * binary_tree_nodes - this function counts the number of nodes with
 * at least a child
 * in a binary tree/subtree
 * @tree: the root of the tree
 * Return: the no of nodes with at least a child,
 * if the tree doesn't exist return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (0);
	if (tree != NULL)
	{
		count = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		return (1 + count);
	}
	return (0);
}
