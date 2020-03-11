#include "binary_trees.h"

bst_t *bst_recurse_insert(bst_t *tree, int value)
{
	if (!tree->left && value < tree->n)
	{
		tree->left = malloc(sizeof(bst_t));
		if (!tree->left)
			return (NULL);
		tree->left->n = value;
		tree->left->left = NULL;
		tree->left->right = NULL;
		tree->left->parent = tree;
		return (tree->left);
	}
	else if (!tree->right && value > tree->n)
	{
		tree->right = malloc(sizeof(bst_t));
		if (!tree->right)
			return (NULL);
		tree->right->n = value;
		tree->right->right = NULL;
		tree->right->right = NULL;
		tree->right->parent = tree;
		return (tree->right);
	}

	if (value < tree->n)
		return (bst_recurse_insert(tree->left, value));
	else if (value > tree->n)
		return (bst_recurse_insert(tree->right, value));

	return (NULL);
}

bst_t *bst_insert(bst_t **tree, int value)
{
	if (!tree)
		return (NULL);

	if (!*tree)
	{
		*tree = malloc(sizeof(bst_t));
		(*tree)->left = NULL;
		(*tree)->right = NULL;
		(*tree)->parent = NULL;
		(*tree)->n = value;

		return (*tree);
	}

	return (bst_recurse_insert(*tree, value));
}

