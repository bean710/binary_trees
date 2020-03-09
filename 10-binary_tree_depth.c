#include "binary_trees.h"
/**
 * binary_tree_depth - finds the depth of the binary tree
 * @tree: pointer to given node
 * Return: Depth, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
