#include "binary_trees.h"

/**
 * binary_tree_sibling - Gets the sibling of a node in a binary tree
 * @node: The node to get the sibling of
 *
 * Return: Pointer to the node's sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (node->parent->left == node ?
			node->parent->right : node->parent->left);
}
