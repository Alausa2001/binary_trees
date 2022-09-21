#include "binary_trees.h"
/**
 * binary_tree_inorder - traverses a binary tree in-orderly
 * step 1-- traverse the left subtree recursively
 * step 2-- visit the root node
 * step 3-- traverse the right subtree recursivvely
 * @tree: pointer to the root node
 * @func: a pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
