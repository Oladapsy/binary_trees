#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree - pointer to the root node of the tree to count from
 *
 * Return: the number of leaves or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_no = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (leaves_no += 1);

	leaves_no += binary_tree_leaves(tree->left);
	leaves_no += binary_tree_leaves(tree->right);
	return (leaves_no);
}
