#include "binary_trees.h"

/**
 * binary_tree_postorder - going by order post
 * @tree: tree
 * @func: pointer
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
