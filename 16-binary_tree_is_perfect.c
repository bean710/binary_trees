#include "binary_trees.h"
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
	if (binary_tree_height(tree->left) != 
			binary_tree_height(tree->right))
		return (0);
	if (binary_tree_is_perfect(tree->left) && 
			binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}
