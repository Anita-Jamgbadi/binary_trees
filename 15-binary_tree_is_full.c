#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * full tree: a tree that has no nodes with just one child
 *
 * @tree: root node
 * Return: 1 if full, 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
