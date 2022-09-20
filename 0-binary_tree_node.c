#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - fuction creates a binary tree node
 * @parent: The node of the tree
 * @value: The value to be inserted into the node
 * Return: a pointer to the node created
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->right = NULL;
	node->left = NULL;
	return (node);
}
