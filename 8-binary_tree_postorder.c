#include "binary_trees.h"

/**
 * binary_tree_postorder - Calls a function for every value of every node
 * @tree: The tree or subtree to traverse
 * @func: The function to apply to every node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)
	{
		binary_tree_postorder(tree->left, func);
	}
	if (tree->right)
	{
		binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}
