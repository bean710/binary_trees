#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	return ((lheight > rheight ? lheight : rheight) + 1);
}
