#include "binary_trees.h"

/**
 * bst_search - Seaches a binary search tree for a value
 * @tree: Pointer to the node currently searching on
 * @value: The value to seach for
 *
 * Return: Pointer to the node with the value, NULL if not found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);

	if (value > tree->n)
		return (bst_search(tree->right, value));

	if (value < tree->n)
		return (bst_search(tree->left, value));

	return ((bst_t *)tree);
}
