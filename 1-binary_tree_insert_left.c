#include "binary_trees.h"
#include <stdio.h>

/**
 * insert_left -  a function that inserts a node as 
 * the left-child of another node
 * @parent: a pointer to the node to insert the left-child
 * @value: is the value to store in the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
	{
		return (NULL);
	}

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = parent->left;
	parent->left = node;

	if (node->left)
		node->left->parent = node;

	return (node);
}
