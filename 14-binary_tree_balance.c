#include "binary_trees.h"

/**
 * my_binary_tree_height - Gets the height of a binary tree
 * @tree: pointer to the current node
 *
 * Return: The height of the tree
 */
int my_binary_tree_height(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (!tree)
		return (0);

	lheight = my_binary_tree_height(tree->left);
	rheight = my_binary_tree_height(tree->right);

	return ((lheight > rheight ? lheight : rheight) + 1);
}

/**
 * binary_tree_balance - Gets the balance factor of a binary tree
 * @tree: Pointer to the root of the tree
 *
 * Return: The tree balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (my_binary_tree_height(tree->left) -
			my_binary_tree_height(tree->right));
}
