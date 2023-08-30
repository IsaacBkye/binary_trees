#include "binary_trees.h"

/**
 * Do_depth - node depth
 * @tree: tree
 * Return: depth
 */
size_t Do_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (Do_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - calls Do_depth
 * @tree: tree
 * Return: depth
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (Do_depth(tree));
}
