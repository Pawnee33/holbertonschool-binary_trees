#include "binary_trees.h"

/**
 * binary_tree_uncle - Gets the uncle of a node.
 * @node: The node to get the uncle of.
 * Return: The uncle of the node or NULL on failure.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *parent;
    binary_tree_t *grandparent;
    int is_parent_left = -1;

    if (!node->parent)
        return (NULL);

    parent = node->parent;

    if (!parent->parent)
        return (NULL);
    
    grandparent = parent->parent;

    is_parent_left = grandparent->left == parent;

    return (is_parent_left ? grandparent->right : grandparent->left);

}
