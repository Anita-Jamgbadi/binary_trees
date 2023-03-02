#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: points to node who's sibling we want to find
 * Return: pointer to sibling node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent != NULL)
	{
		if (node == node->parent->left)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	else
		return (NULL);
}
/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * uncle: sibling of a nodes parent
 * @node: node to be scrutinized
 * Return: pointer to the uncle or null pointer
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
