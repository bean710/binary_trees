#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree in postorder
 * @tree: The current node
 * @func: Pointer to the function to call on every value in the tree
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
