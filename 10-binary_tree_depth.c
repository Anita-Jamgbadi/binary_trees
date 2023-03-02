#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a binary tree;
 * depth: the distance of a node from the root of a binary tree
 *
 * @tree: points to the node to be measured
 * Return: depth of node or o for an empty tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
