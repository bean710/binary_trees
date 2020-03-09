#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 * @tree: Pointer to the current node
 *
 * Return: The number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (tree->left || tree->right ? binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right) : 1);
}
