#include "binary_trees.h"
/**
 * binary_tree_nodes - a function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: is a pointer to the root node of the tree to
 * count the number of nodes
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t count = 0;

	if (tree->left || tree->right)
	{
		count++;
	}
	count += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (count);
}
