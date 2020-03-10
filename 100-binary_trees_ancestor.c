#include "binary_trees.h"

/**
 * contains_node - Checks if a node is abobe (or is) another
 * @root: The root of the search
 * @node: Pointer to the node to look for
 *
 * Return: 1 if contains node, otherwise 0
 */
int contains_node(const binary_tree_t *root, const binary_tree_t *node)
{
	if (!root)
		return (0);

	if (root == node)
		return (1);

	return (contains_node(root->left, node) |
			contains_node(root->right, node));
}

/**
 * binary_trees_ancestor - finds the LCA of two nodes in a tree
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer the the LCA
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *node = (binary_tree_t *)first;

	while (node)
	{
		if (contains_node(node, second))
			return (node);

		node = node->parent;
	}

	return (NULL);
}
