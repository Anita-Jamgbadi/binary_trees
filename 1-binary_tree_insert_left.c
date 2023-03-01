#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a left child for a parent node,
 * if said parent already has a left child, the new node replaces it
 * and the old left child becomes the left child of the new node
 *
 * @parent: parent node
 * @value: value of new node
 * Return: pointer to new node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newLeftChild;

	newLeftChild = malloc(sizeof(binary_tree_t));

	if (newLeftChild == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	newLeftChild->parent = parent;
	newLeftChild->n = value;
	newLeftChild->right = NULL;

	if (parent->left != NULL)
	{
		newLeftChild->left = parent->left;
		parent->left = newLeftChild;
		newLeftChild->left->parent = newLeftChild;
	}
	else
	{
		parent->left = newLeftChild;
	}

	return (newLeftChild);
}
