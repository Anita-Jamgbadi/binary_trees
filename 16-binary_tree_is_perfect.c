#include "binary_trees.h"
/**
 * height - checks tree height
 * @tree: root node
 * Return: 0, 1, -1
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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * perfect tree: when a tree is full and all its leaf nodes are at the same level
 *
 * @tree: root node
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = height(tree->left);
	r_height = height(tree->right);
	
	if (l_height == r_height)
	{
		if (tree->left == NULL || tree->right == NULL)
			return (1);

		else
			return (binary_tree_is_perfect(tree->right) && binary_tree_is_perfect(tree->left));
	}
	else
		return (0);
}
