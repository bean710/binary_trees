#include "binary_trees.h"

/**
 * my2_binary_tree_height - Gets the height of a binary tree
 * @tree: pointer to the current node
 *
 * Return: The height of the tree
 */
int my2_binary_tree_height(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (!tree)
		return (0);

	lheight = my2_binary_tree_height(tree->left);
	rheight = my2_binary_tree_height(tree->right);

	return ((lheight > rheight ? lheight : rheight) + 1);
}

/**
 * my_binary_tree_balance - Gets the balance factor of a binary tree
 * @tree: Pointer to the root of the tree
 *
 * Return: The tree balance factor
 */
int my_binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (my2_binary_tree_height(tree->left) -
			my2_binary_tree_height(tree->right));
}

/**
 * my_is_search_tree - Recursive function to check if a tree is a search tree
 * @tree: Pointer to the node currently being checked
 * @min: Pointer to the node that is the current minimum
 * @max: Pointer to the node that is the current maximum
 *
 * Return: 1 if BST, otherwise 0
 */
int my_is_search_tree(const binary_tree_t *tree, const binary_tree_t *min,
		const binary_tree_t *max)
{
	if (!tree)
		return (1);

	if (min && min->n >= tree->n)
		return (0);

	if (max && max->n <= tree->n)
		return (0);

	return (my_is_search_tree(tree->left, min, tree) &
			my_is_search_tree(tree->right, tree, max));
}

/**
 * balance_recurse - Recursively checks if the balance is AVL range
 * @tree: Pointer to the node to check balance
 *
 * Return: 1 if balanced, 0 if not
 */
int balance_recurse(const binary_tree_t *tree)
{
	int bal;

	if (!tree)
		return (1);

	bal = my_binary_tree_balance(tree);

	if ((bal == 0 || bal == -1 || bal == 1) &&
			balance_recurse(tree->left) &&
			balance_recurse(tree->right))
		return (1);

	return (0);
}

/**
 * binary_tree_is_avl - Checks if a binary tree is an AVL
 * @tree: Pointer to the root of the tree to check
 *
 * Return: 1 if AVL, otherwise 0
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (my_is_search_tree(tree, NULL, NULL) && balance_recurse(tree))
		return (1);

	return (0);
}
