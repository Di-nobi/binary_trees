#include "binary_trees.h"
/**
 * delete_tree - a function that deletes an entire binary tree
 * @tree: tree to be deleted
 * Return: Nothin if tree is NULL
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (NULL);
	}
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
}
