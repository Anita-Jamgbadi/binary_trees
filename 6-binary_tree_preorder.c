#include "binary_trees.h"
/**
 * binary_tree_preorder - This function goes through a binary tree using
 * pre-order traversal.
 *
 * @tree: the tree to be traversed
 * @func: points to the function to call for each node, the value of the
 * node must be passed to this function
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
