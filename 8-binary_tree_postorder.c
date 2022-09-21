#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses a binary tree post-orderly
 * step1-- traverse left subtree recursively
 * step2-- traverse right subtree recursively
 * step3-- vist the root node
 * @tree: pointer to the root node
 * @func: fu pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
