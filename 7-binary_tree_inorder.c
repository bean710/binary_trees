#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - Navigates a binary tree using inorder
 * @tree: Pointer to the current node navigating on
 * @func: Pointer to the function to call on each value
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;


	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
