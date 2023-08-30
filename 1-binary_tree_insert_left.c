#include "binary_trees.h"

/**
 * binary_tree_insert_left - Left insertion
 * @parent: node
 * @value: int
 * Return: pointer
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *b_node;

	if (parent == NULL)
		return (NULL);

	b_node = malloc(sizeof(binary_tree_t));
	if (b_node == NULL)
		return (NULL);

	b_node->parent = parent;
	b_node->n = value;
	b_node->left = parent->left;
	b_node->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = b_node;

	parent->left = b_node;

	return (b_node);
}
