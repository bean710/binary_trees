#include "binary_trees.h"
/**
 * binary_tree_insert_right - New right-child
 * @parent: Pointer to parent node
 * @value: Node value
 * Return: Pointer to created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (!parent)
		return (NULL);

	right_node = binary_tree_node(parent, value);

	if (!right_node)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = right_node;
		right_node->right = parent->right;
	}

	parent->right = right_node;

	return (right_node);
}
