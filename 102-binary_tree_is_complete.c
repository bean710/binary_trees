#include "binary_trees.h"
/**
 * _helper_recursive_completeTree - Helper function to check completeness
 * @tree: Pointer to root node
 * @index: Current assigned index to root node
 * @noNodes: Number of nodes in the tree
 * Return: Returns boolean value
 */
int _helper_recursive_completeTree(const binary_tree_t *tree,
		int index, int noNodes)
{
	if (!tree)
		return (1);
	if (index >= noNodes)
		return (0);
	return (_helper_recursive_completeTree(tree->left, 2 * index + 1, noNodes) &&
			_helper_recursive_completeTree(tree->right, 2 * index + 2, noNodes));
}
/**
 * countNodes - Counts the number of nodes
 * @tree: Points to the root node
 * Return: No. of nodes
 */
unsigned int countNodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + countNodes(tree->left) +
			countNodes(tree->right));
}
/**
 * binary_tree_is_complete - Checks if tree is complete
 * @tree: Pointer to the root of the tree
 * Return: Returns boolean value returned from helper
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int num_nodes = countNodes(tree);

	if (num_nodes == 0)
		return (1);

	return (_helper_recursive_completeTree(tree, 0, num_nodes));
}
