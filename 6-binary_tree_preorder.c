#include "binary_trees.h"

/**
 * binary_tree_preorder - Calls a function for every value of every node
 * @tree: The tree or subtree to traverse
 * @func: The function to apply to every node
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	if (tree->left)
	{
		binary_tree_preorder(tree->left, func);
	}
	if (tree->right)
	{
		binary_tree_preorder(tree->right, func);
	}
}
