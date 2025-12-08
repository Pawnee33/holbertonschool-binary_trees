#include "binary_trees.h"
/**
* binary_tree_inorder - traverse a binary tree using an
* in-order traversal
* @tree: pointer towards the tree root
* @func: pointer towards the function to call
* for each nodes
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
