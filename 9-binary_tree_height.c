#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: the pointer to root node
 *
 * Return: unsigned int, (the height)
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0;
	size_t rh = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		lh = 1 + binary_tree_height(tree->left);
	}
	else
		lh = 0;

	if (tree->right)
	{
		rh = 1 + binary_tree_height(tree->right);
	}
	else
		rh = 0;

	if (lh > rh)
	{
		return (lh);
	}
	else
	{
		return (rh);
	}
}
