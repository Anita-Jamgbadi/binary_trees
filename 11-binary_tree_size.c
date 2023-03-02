#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree;
 * size: total number of nodes on a tree (incl root node)
 *
 * @tree: points to root node
 * Return: size of tree in size_t or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
