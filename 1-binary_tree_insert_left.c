#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of the parent
 * @parent: The parent of the node to be inserted
 * @value: The value for the new node to have
 *
 * Return: Pointer to the new node or NULL on fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	
	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;

	if (parent->left)
		parent->left->parent = node;

	node->left = parent->left;
	node->right = NULL;
	parent->left = node;

	return (node);
}
