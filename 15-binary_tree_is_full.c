#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: The current node
 *
 * Return: 1 if full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if ((tree->left || tree->right) && !(tree->left && tree->right))
		return (0);

	return (binary_tree_is_full(tree->left) &
			binary_tree_is_full(tree->right));
}
