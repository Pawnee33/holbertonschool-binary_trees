#include "binary_trees.h"

/**
 * binary_tree_leaves - Compute sthe number of leaves in this tree
 * @tree: The tree to compute
 * Return: The number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    int count = 0;

    if (!tree->right && !tree->left)
        return 1;

    if (tree->left)
        count += binary_tree_leaves(tree->left);
    if (tree->right)
        count += binary_tree_leaves(tree->right);
    
    return (count);
}