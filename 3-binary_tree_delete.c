#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes whole tree
 * @tree: Pointer to root node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);

	free(tree);

}
