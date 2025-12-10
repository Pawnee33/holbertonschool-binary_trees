#include "binary_trees.h"

int tree_height(const binary_tree_t *tree)
{
    int left = 0, right = 0;

    if (!tree)
        return (0);

    if (!tree->right && !tree->left)
        return 1;

    if (tree->left)
        left = tree_height(tree->left) + 1;
    if (tree->right)
        right = tree_height(tree->right) + 1;

    return ((left >= right) ? left : right);
}

int binary_tree_balance(const binary_tree_t *tree)
{
    if(!tree)
        return (0);

    return (tree_height(tree->left) - tree_height(tree->right));
}