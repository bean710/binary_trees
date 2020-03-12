#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Navigates a binary tree using preorder
 * @tree: Pointer to the current node navigating on
 * @func: Pointer to the function to call on each value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
