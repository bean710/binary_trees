#include "binary_trees.h"

/**
 * binary_tree_uncle - gets the uncle of a node in a binary tree
 * @node: The node to get the uncle of
 *
 * Return: Pointer to the node's uncle, NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	return (node->parent->parent->left == node->parent ?
			node->parent->parent->right : node->parent->parent->left);
}
