#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left child of another node
 *
 * @parent: node parent
 * @value: node value
 * Return: pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    new = malloc(sizeof(binary_tree_t));
    if (new == NULL || parent == NULL)
        return (NULL);

    new->parent = parent;
    new->n = value;
    new->left = NULL;
    new->right = parent->right;

    if (parent->right != NULL)
        new->right = parent->right;

    parent->right = new;

    return(new);
}