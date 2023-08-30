#include "binary_trees.h"

/**
 * measureHeight - height measure
 * @tree: tree
 * Return: int
 */
size_t measureHeight(const binary_tree_t *tree)
{
	size_t a = 0;
	size_t b = 0;

	if (tree == NULL)
		return (0);
	a = measureHeight(tree->left);
	b = measureHeight(tree->right);
	if (a > b)
		return (a + 1);
	return (b + 1);
}

/**
 * binary_tree_height - measureHeight
 * @tree: tree
 * Return: int
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (measureHeight(tree) - 1);
}
