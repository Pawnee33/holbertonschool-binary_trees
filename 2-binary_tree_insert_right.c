#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts a node as the right node of parent
 * @parent: The parent node to insert in
 * @value: The initialization value of the new node
 * Return: A pointer to the new node.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;

	new->left = NULL;
	new->right = NULL;

	if (parent->right)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	parent->right = new;

	return (new);
}
