#include "binary_trees.h"

/**
 * insert_helper - Inserts a node into a binary search tree
 * @tree: The current node to add from
 * @value: The value of the node to add
 *
 * Return: Pointer to the new node, NULL on failure
 */
bst_t *insert_helper(bst_t *tree, int value)
{
	if (value < tree->n)
	{
		if (tree->left)
			return (insert_helper(tree->left, value));
		tree->left = binary_tree_node(tree, value);
		return (tree->left);
	}
	else if (value > tree->n)
	{
		if (tree->right)
			return (insert_helper(tree->right, value));
		tree->right = binary_tree_node(tree, value);
		return (tree->right);
	}

	return (NULL);
}

/**
 * bst_insert - Inserts node into tree
 * @tree: Double pointer to root node
 * @value: Value to be added to the node
 * Return: Pointer to new node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (!tree)
		return (NULL);

	if (!*tree)
	{
		*tree = binary_tree_node(*tree, value);
		return (*tree);
	}

	return (insert_helper(*tree, value));
}
