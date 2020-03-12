#include "binary_trees.h"

/**
 * binary_tree_height - Gets the height of a binary tree
 * @tree: pointer to the current node
 *
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	return ((lheight > rheight ? lheight : rheight) + 1);
}

/**
 * run_level - Prints out a level of a binary tree recursively
 * @node: The root node to recurse on
 * @level: The current level th recursion is on
 * @func: Pointer to the function to call on each node
 */
void run_level(const binary_tree_t *node, size_t level, void (*func)(int))
{
	if (!node)
		return;

	if (level == 0)
		func(node->n);
	else
	{
		run_level(node->left, level - 1, func);
		run_level(node->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - Prints a binary tree in order of level
 * @tree: Pointer to the root of the tree
 * @func: Function to be called on each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t depth, height;

	if (!tree || !func)
		return;

	height = binary_tree_height(tree);

	for (depth = 0; depth < height + 1; ++depth)
		run_level(tree, depth, func);
}
