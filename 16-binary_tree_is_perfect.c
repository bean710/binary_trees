#include "binary_trees.h"

/**
 * my_binary_tree_height - Gets the height of a binary tree
 * @tree: pointer to the current node
 *
 * Return: The height of the tree
 */
size_t my_binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	lheight = my_binary_tree_height(tree->left);
	rheight = my_binary_tree_height(tree->right);

	return ((lheight > rheight ? lheight : rheight) + 1);
}

/**
 * binary_tree_is_perfect - Checks if tree is perfect
 * @tree: Pointer to root node
 * Return: 0 on tree = NULL, 1 on perfect tree.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (my_binary_tree_height(tree->left) != 
			my_binary_tree_height(tree->right))
		return (0);
	if (binary_tree_is_perfect(tree->left) && 
			binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}
