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
	bst_t *node;

	if (value < tree->n)
	{
		if (tree->left)
			return (insert_helper(tree->left, value));
		node = malloc(sizeof(bst_t));
		if (!node)
			return (NULL);
		node->parent = tree;
		node->left = NULL;
		node->right = NULL;
		node->n = value;
		tree->left = node;
		return (node);
	}
	else if (value > tree->n)
	{
		if (tree->right)
			return (insert_helper(tree->right, value));
		node = malloc(sizeof(bst_t));
		if (!node)
			return (NULL);
		node->parent = tree;
		node->left = NULL;
		node->right = NULL;
		node->n = value;
		tree->right = node;
		return (node);
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
	bst_t *node;

	if (!tree)
		return (NULL);

	if (!*tree)
	{
		node = malloc(sizeof(bst_t));
		if (!node)
			return (NULL);
		node->n = value;
		node->parent = NULL;
		node->left = NULL;
		node->right = NULL;
		*tree = node;
		return (node);
	}

	return (insert_helper(*tree, value));
}
