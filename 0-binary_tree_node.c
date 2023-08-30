#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree nod
 * @value: value of node
 * @parent: parent of node
 * Return: pointer
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *b_node;

	b_node = malloc(sizeof(binary_tree_t));
	if (b_node == NULL)
		return (NULL);
	b_node->parent = parent;
	b_node->n = value;
	b_node->right = NULL;
	b_node->left = NULL;
	return (b_node);
}
