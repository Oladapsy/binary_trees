#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree);
/**
 * binary_tree_levelorder - a funtion that goes through a binary tree using
 * level order transversal
 *
 * @tree: is a pointer to the root node of the tree to transverse
 *
 * @func: a pointer to a function to call for each node
 * value in the node must be passed as a parameter to this function
 *
 * Return: nothing if tree or func is null...
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t **queue;
	size_t size, i, j;

	if (tree == NULL || func == NULL)
		return;

	size = binary_tree_size(tree);
	queue = malloc(sizeof(binary_tree_t *) * size);
	if (queue == NULL)
		return;

	queue[0] = (binary_tree_t *)tree;

	j = 1;
	i = 0;
	while (i < j)
	{
		func(queue[i]->n);
		if (queue[i]->left != NULL)
			queue[j++] = queue[i]->left;
		if (queue[i]->right != NULL)
			queue[j++] = queue[i]->right;
		i++;
	}
	free(queue);
}

/**
 * binary_tree_size - measure the size of a binary tree
 *
 * @tree: the pointer to the root node of the tree to measure the size
 *
 * Return: size or 0 if root is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1, lt = 0, rt = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lt = binary_tree_size(tree->left);
	if (tree->right)
		rt = binary_tree_size(tree->right);
	size += lt + rt;

	return (size);
}
