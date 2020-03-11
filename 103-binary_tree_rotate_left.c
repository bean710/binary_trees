#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotates a binary tree left
 * @tree: Pointer to the root of the tree
 *
 * Return: Pointer to the new root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);
	binary_tree_t *node = tree->right;

	tree->right = node->left;
	if (node->left)
		node->left->parent = tree;
	node->left = tree;
	tree->parent = node;

	return (node);
}
