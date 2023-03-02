#include "binary_trees.h"
/**
 * height - measures height for a binary tree(balanced way)
 *
 * @tree: node to cal height of
 * Return: int value of height
 */

int height(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = height(tree->left);
	r_height = height(tree->right);

	return (1 + (l_height > r_height ? l_height : r_height));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * balance factor: difference in height between left and right subtrees
 * 0 = balanced, 1 = left is right + 1, -1 = left is right - 1
 *
 * @tree: points to tree root
 * Return: balance factor as int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int factor, left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	factor = left_height - right_height;
	return (factor);
}
