#include "binary_trees.h"

/**
 * binary_tree_height - Computes the maximum height of the tree
 * @tree: The tree root.
 * Return: The maximum height of the tree
 *
*/
int binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	return ((left >= right) ? left : right);
}

/**
 * binary_tree_is_perfect - Checks wether the tree is perfect.
 * @tree: The tree to check.
 * Return: 1 if true, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lefth, righth;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	
	if (!tree->left || !tree->right)
		return (0);

	lefth = binary_tree_height(tree->left);
	righth = binary_tree_height(tree->right);

	return (
		binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right) &&
		lefth == righth
	);
}
