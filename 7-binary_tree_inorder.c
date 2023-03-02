#include "binary_trees.h"
/**
 * binary_tree_inorder - This function traverses a binary tree inorder:
 * i.e Left -> Root -> Right
 * 
 * @tree: points to the tree to be traversed
 * @func: calls on the node to be traversed using its value (n)
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
