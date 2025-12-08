#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as the
* left-child of another node
* @parent: pointer point to parent
* @value: the value to store in the new node
*
* Return: node_left or NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_left;

	if (parent == NULL)
	{
		return (NULL);
	}

	node_left = malloc(sizeof(binary_tree_t));

	if (node_left == NULL)
	{
		return (NULL);
	}

	node_left->n = value;
	node_left->parent = parent;
	node_left->left = NULL;
	node_left->right = NULL;

	if (parent->left != NULL)
	{
		node_left->left = parent->left;
		node_left->left->parent = node_left;
		parent->left = node_left;
	}
	else
	{
		parent->left = node_left;
	}
	return (node_left);
}
