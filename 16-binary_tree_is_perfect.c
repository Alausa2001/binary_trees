#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node
 * Return: if perfect return 1 else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;
	size_t i;
	int no_nodes = 1;
	
	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	for (i = 0; i <= height; i++)
	{
		no_nodes = no_nodes * 2;
	}
	if (((int) binary_tree_size(tree)) == (no_nodes - 1))
		return (1);
	return (0);
}
#include "binary_trees.h"
/**
 * binary_tree_size - calculates the height of a tree
 * @tree: pointer to root node
 * Return: the size of the tree/subtree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int no_nodes;

	if (tree == NULL)
		return (0);


	if (tree != NULL)
	{
		no_nodes = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	}
	return (no_nodes);
}
#include "binary_trees.h"
/**
 * binary_tree_height - calculates the height of a tree
 * @tree: pointer to root node
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int count_r, count_l = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree != NULL)
	{
		count_l = 1 + binary_tree_height(tree->left);
		count_r = 1 + binary_tree_height(tree->right);
	}
	if (count_l >= count_r)
		return (count_l);
	return (count_r);
}

