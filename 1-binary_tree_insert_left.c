#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 *
 * @parent: node parent
 * @value: node value
 * Return: pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    new = malloc(sizeof(binary_tree_t));
    if (new == NULL || parent == NULL)
        return (NULL);

    new->parent = parent;
    new->n = value;
    new->right = NULL;
    new->left = parent->left;

    if (parent->left != NULL)
        new->left = parent->left;

    parent->left = new;

    return(new);
}