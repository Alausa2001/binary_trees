#include "binary_trees.h"
/**
 * binary_tree_depth - calculates the depth of a tree
 * @tree: pointer to the node whose depth is to be determined
 * Return: if the tree doesn't exist it returns 0  else the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL || binary_tree_is_root(tree))
		return (0);
	while (tree->parent != NULL)
	{
		count += 1;
		tree = tree->parent;
	}
	return (count);
}


/**
 * binary_tree_is_root - checks if a node is a root
 * @node: pointer to the node to check
 * Return: 1 if node is a root else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	node = node->parent;
	if (node == NULL)
		return (1);
	return (0);
}

/**
 * binary_trees_ancestor - checks if a node is a root
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: 1 if node is a root else 0
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t depth_f, depth_s;


	if (!first || !second)
		return (NULL);
	if (first == second->parent)
		return ((binary_tree_t *)first);
	if (second == first->parent)
		return ((binary_tree_t *)second);
	depth_f = binary_tree_depth(first);
	depth_s = binary_tree_depth(second);
	if (depth_f > depth_s)
	{
		first = first->parent;
		depth_s++;
	}

	if (depth_s > depth_f)
	{
		second = second->parent;
		depth_f++;
	}
	if (depth_f == depth_s)
	{
		while (second->parent != first->parent)
		{
			second = second->parent;
			first = first->parent;
		}
		return (first->parent);
	}
	return (NULL);
}
