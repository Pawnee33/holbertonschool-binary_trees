#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));
	if(!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	if (parent)
	{
		if(parent->right)
		{
			new->right = parent->right;
			new->right->parent = new;
			new->left = NULL;
		}
		parent->right = new;
	}
	else
	{
		new->right = NULL;
		new->left = NULL;
	}

	return (new);
}