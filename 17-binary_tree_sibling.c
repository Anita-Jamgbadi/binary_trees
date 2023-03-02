#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: points to node who's sibling we want to find
 * Return: pointer to sibling node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	sibling = malloc(sizeof(binary_tree_t *));

	if (sibling == NULL)
		return (NULL);

	if (node->parent != NULL)
	{
		if (node == node->parent->left)
			sibling = node->parent->right;
		else
			sibling = node->parent->right;
	}
	else
		return (NULL);
	return (sibling);
}
