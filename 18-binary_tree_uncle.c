#include "binary_trees.h"
/**
 * binary_tree_uncle - return the uncle of a node
 * @node: pointer to node whose uncle is to be determined
 * Return: the uncle of the node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp = node;
	binary_tree_t *uncle;

	if (node == NULL || (temp->parent == NULL))
		return (NULL);
	if (temp != NULL)
	{
		temp = temp->parent;
		uncle = binary_tree_sibling(temp);
		return (uncle);
	}
	return (NULL);
}
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

