#include "binary_trees.h"

/**
 * array_to_bst - Converts an array to a binary search tree
 * @array: Pointer to the first element in the array
 * @size: The size of the array
 *
 * Return: Pointer to the new BST, or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;

	if (!array)
		return (NULL);

	while (size-- > 0)
		bst_insert(&tree, *(array++));

	return (tree);
}
