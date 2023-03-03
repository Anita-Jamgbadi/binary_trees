#include "binary_trees.h"
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * the first ancestor thehat two nodes have in common, if one node is an
 * ancestor of the other, it should be returned
 *
 * @first: node
 * @second: node
 * Return: pointer to the ancestor or null
 */


binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *ancestor;
	const binary_tree_t *node;

	if (first == NULL || second == NULL)
		return (NULL);

	ancestor = (binary_tree_t *)second;
	node = first;

	while (ancestor != NULL)
	{
		if (ancestor == node)
			return ((binary_tree_t *)ancestor);
		ancestor = ancestor->parent;

		if (ancestor == NULL)
		{
			node = first;
			ancestor = (binary_tree_t *)second;
			second = first;
		}
		else if (ancestor->left == node)
			node = ancestor->right;
		else
			node = ancestor->left;
	}

	return (NULL);
}
