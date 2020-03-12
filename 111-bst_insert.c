#include "binary_trees.h"
/**
 * bst_insert - Inserts node into tree
 * @tree: Double pointer to root node
 * @value: Value to be added to the node
 * Return: Pointer to new node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *newNode = binary_tree_node(*tree, value);
	bst_t *x = *tree;

	while (x != NULL)
	{
		if (value < x->n)
			x = x->left;
		else
			x = x->right;
	}

	if (x == NULL)
		x = newNode;
	else if (value < x->n)
		x->left = newNode;
	else
		x->right = newNode;
	return (x);
}
