#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_leaf - function checks is a node is a leafnode
 * @node: pointer to the node
 * Return: 1 if node is a leafnode else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
	if (node != NULL)
	{
		binary_tree_is_leaf(node->left);
		binary_tree_is_leaf(node->left);
	}
}
