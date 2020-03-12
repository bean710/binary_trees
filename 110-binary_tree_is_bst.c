#include "binary_trees.h"

/**
 * is_search_tree - Recursive function to check if a tree is a search tree
 * @tree: Pointer to the node currently being checked
 * @min: Pointer to the node that is the current minimum
 * @max: Pointer to the node that is the current maximum
 *
 * Return: 1 if BST, otherwise 0
 */
int is_search_tree(const binary_tree_t *tree, const binary_tree_t *min,
		const binary_tree_t *max)
{
	if (!tree)
		return (1);

	if (min && min->n >= tree->n)
		return (0);

	if (max && max->n <= tree->n)
		return (0);

	return (is_search_tree(tree->left, min, tree) &
			is_search_tree(tree->right, tree, max));
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a BST
 * @tree: Pointer to the root of the tree
 *
 * Return: 1 if BST, otherwise 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_search_tree(tree, NULL, NULL));
}
