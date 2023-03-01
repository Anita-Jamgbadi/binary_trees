#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node on a tree is a leaf
 * @node: points to the node to checked
 * Return: 1 if Yes, 0 if No
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
