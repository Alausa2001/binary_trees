#include "binary_trees.h"
#include <stdio.h>
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
	if (node != NULL)
	{
		binary_tree_is_leaf(node->left);
		binary_tree_is_leaf(node->left);
	}
}
