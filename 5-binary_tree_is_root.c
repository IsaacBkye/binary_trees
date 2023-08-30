#include "binary_trees.h"

/**
 * binary_tree_is_root - if a root
 * @node: pointer to node
 * Return: int
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int b_node = 0;

	if (node && !(node->parent))
		b_node = 1;
	return (b_node);
}
