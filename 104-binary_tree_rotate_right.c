#include "binary_trees.h"
/**
 * binary_tree_rotate_right - rotates BT right
 * @tree: Pointer to the root node
 * Return: Returns the pointer to newly made node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *node = NULL;

	if (!tree || !tree->left)
		return (NULL);
	node = tree->left;

	tree->left = node->right;
	if (node->right)
		node->right->parent = tree;
	node->right = tree;
	tree->parent = node;

	return (node);
}
