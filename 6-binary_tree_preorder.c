#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - a function that goes through a binary tree using
 * pre-order transversal
 *
 * @tree: a pointer to the root node of the tree to transverse
 *
 * @func: function pointer called for each node
 * value in the node must be passed as a paramenter to this func..
 *
 * Return: nothing, just transverse
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
