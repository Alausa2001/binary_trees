#include "binary_trees.h"
/**
 * binary_tree_sibling - return the sibling of a node
 * @node : pointer to node whose sibling is to be determined
 * Return: the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp = node;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (temp != NULL)
	{
		temp = temp->parent;
		if (temp->right == node)
			return (temp->left);
		if (temp->left == node)
			return (temp->right);
	}
	return (NULL);
}

