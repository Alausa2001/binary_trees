#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to root node
 * Return: if full return 1 else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int count_l = 0;
	int count_r = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if ((tree->left) && (tree->right))
	{
		count_r = binary_tree_is_full(tree->right);
		count_l = binary_tree_is_full(tree->left);
	}
	if (count_r == 1 && count_l == 1)
		return (1);
	return (0);
}
