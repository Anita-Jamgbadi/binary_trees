#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a left child for a parent node,
 * if said parent already has a left child, the new node replaces it
 * and the old left child becomes the left child of the new node
 *
 * @parent: parent node
 * @value: value of new node
 * Return: pointer to new node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newRightChild;

	if (parent == NULL)
		return (NULL);

	newRightChild = malloc(sizeof(binary_tree_t));

	if (newRightChild == NULL)
		return (NULL);

	newRightChild->parent = parent;
	newRightChild->n = value;
	newRightChild->left = NULL;

	if (parent->right != NULL)
	{
		newRightChild->right = parent->right;
		newRightChild->right->parent = newRightChild;
	}
	else
	{
		newRightChild->right = NULL;
	}

	parent->right = newRightChild;

	return (newRightChild);
}
