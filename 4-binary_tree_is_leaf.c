#include "binary_trees.h"

/**
 * binary_tree_is_leaf - if the node is a leaf
 * @node: node
 * Return: int
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int b_node = 0;

	if (node && !(node->left) && !(node->right))
		b_node = 1;
	return (b_node);
}
