#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes w/ atleast 1 child
 * @tree: Points to root node of tree
 * Return: 0 on failure, count on success.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
