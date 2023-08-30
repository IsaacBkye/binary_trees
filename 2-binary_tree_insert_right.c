#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert at right of other node
 * @parent: parent
 * @value: int
 * Return: pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *b_node;

	if (parent == NULL)
		return (NULL);
	b_node = malloc(sizeof(binary_tree_t));
	if (b_node == NULL)
		return (NULL);
	b_node->parent = parent;
	b_node->n = value;
	b_node->left = NULL;
	b_node->right = parent->right;
	if (parent->right != NULL)
		parent->right->parent = b_node;
	parent->right = b_node;
	return (b_node);
}
