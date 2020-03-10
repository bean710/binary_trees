#include "binary_trees.h"
/**
 * binary_tree_rotate_right - rotates BT right
 * @tree: Pointer to the root node
 * Return: Returns pointer to newly made node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *node = tree->left;

	tree->left = node->right;
	if (node->right)
		node->right->parent = tree;
	node->right = tree;
	tree->parent = node;

	return (node);
}
