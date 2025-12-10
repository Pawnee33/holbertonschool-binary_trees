#include "binary_trees.h"

/**
 * tree_height - Computes the maximum height of a tree/subtree
 * @tree: The tree to compute
 * Return: The maximum length of the tree.
*/
int tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->left)
		left = tree_height(tree->left) + 1;
	if (tree->right)
		right = tree_height(tree->right) + 1;

	return ((left >= right) ? left : right);
}

/**
 * binary_tree_balance - Computes the balance factor of a tree
 * @tree: The tree to compute
 * Return: The balance factor.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (tree_height(tree->left) - tree_height(tree->right));
}
