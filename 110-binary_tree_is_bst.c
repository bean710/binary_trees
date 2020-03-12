#include "binary_trees.h"
/**
 * BSTHelper - Checks if the tree is a BST
 * @tree: Parent node
 * @prev: Previous node
 * Return: Boolean value of the BST status of tree
 */
int BSTHelper(const binary_tree_t *tree, const binary_tree_t *prev)
{
	if (!tree)
		return (1);
	if (tree)
	{
		if (!BSTHelper(tree->left, prev))
			return (0);
		if (prev != NULL && tree->n <= prev->n)
			return (0);
		prev = tree;

		return (BSTHelper(tree->right, prev));
	}

	return (1);
}
/**
 * binary_tree_is_bst - Checks if the tree is a BST
 * @tree: Parent node
 * Return: Boolean value of the BST status of tree
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{	
	const binary_tree_t *prev = NULL;
	
	if (!tree)
		return (0);

	return (BSTHelper(tree, prev));
}
