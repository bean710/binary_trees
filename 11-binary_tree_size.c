#include "binary_trees.h"

/**
 * binary_tree_size - Gets the number of nodes in a binary tree
 * @tree: Pointer to the current node
 *
 * Return: The number of nodes in the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
