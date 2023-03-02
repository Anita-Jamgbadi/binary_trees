#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with at least 1 child in a binary tree
 *
 * @tree: root of tree to count on
 * Return: size_t no of nodes fulfilling said condition or 0 if null
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	count = 0;

	if (tree->left != NULL || tree->right != NULL)
		count = count + 1;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
