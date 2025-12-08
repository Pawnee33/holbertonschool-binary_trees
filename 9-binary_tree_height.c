#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer towards the root node of the tree
* Return: the height of the binary tree or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;

	if (tree == NULL)
		return (0);

 	if (tree->left != NULL)
	{
        height_left = 1 + binary_tree_height(tree->left);
	}
    else
	{
        height_left = 0;
	}

    if (tree->right != NULL)
	{
        height_right = 1 + binary_tree_height(tree->right);
	}
    else
	{
        height_right = 0;
	}

	return (height_left > height_right ? height_left : height_right);
}
