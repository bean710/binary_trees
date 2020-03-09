#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Adds a node to a binary tree
 * @parent: Pointer to the parent node
 * @value: The value to give the new node
 *
 * Return: Pointer to the new node, NULL on fail
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->left = NULL;
	node->right = NULL;
	node->n = value;
	node->parent = parent;

	return (node);
}
