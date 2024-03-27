#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 *
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL or 1 if not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);


	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left != right)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);

}

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
