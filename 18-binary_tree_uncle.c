#include "binary_trees.h"
/**
 * binary_tree_uncle - return the uncle of a node
 * @node: pointer to node whose uncle is to be determined
 * Return: the uncle of the node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp = node;

	if (node == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (temp != NULL)
	{
		temp = temp->parent->parent;
		if (temp->right->right == node || temp->right->left == node)
			return (temp->left);
		if (temp->left->left == node || temp->left->right == node)
			return (temp->right);
	}
	return (NULL);
}
