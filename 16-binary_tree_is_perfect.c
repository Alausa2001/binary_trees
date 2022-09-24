#include "binary_trees.h"
/**
 * size - calculates the height of a tree
 * @tree: pointer to root node
 * Return: the size of the tree/subtree
 */
int size(const binary_tree_t *tree)
{
	int no_nodes;

	if (tree == NULL)
		return (0);


	if (tree != NULL)
	{
		no_nodes = 1 + size(tree->left) + size(tree->right);
	}
	return (no_nodes);
}
/**
 * height - calculates the height of a tree
 * @tree: pointer to root node
 * Return: the height of the tree
 */
int height(const binary_tree_t *tree)
{
	int count_r, count_l = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree != NULL)
	{
		count_l = 1 + height(tree->left);
		count_r = 1 + height(tree->right);
	}
	if (count_l >= count_r)
		return (count_l);
	return (count_r);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node
 * Return: if perfect return 1 else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int heigh, i, siz;
	int no_nodes = 1;

	if (tree == NULL)
		return (0);
	heigh = height(tree);
	for (i = 0; i <= heigh; i++)
	{
		no_nodes = no_nodes * 2;
	}
	siz = size(tree);
	if ((no_nodes - 1) == siz)
		return (1);
	return (0);
}
