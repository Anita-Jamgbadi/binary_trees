#include "binary_trees.h"
/**
 * binary_tree_postorder - this function goes through a binary tree
 * using post-order traversal Left -> Right -> Root
 *
 * @tree: points to the tree to be traversed
 * @func: points to the next node using tree->n
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
