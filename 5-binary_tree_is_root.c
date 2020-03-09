#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if given node is a root node
 * @node: Pointer to node being checked
 * Return: 1 if node, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
    
	return (1);
}

