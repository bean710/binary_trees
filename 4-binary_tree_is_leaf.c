#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a binary tree node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: 1 if leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && !node->left && !node->right ? 1 : 0);
}
