#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right child of another node
 *
 * @parent: the parent node
 *
 * @value: the value of the new node
 *
 * Return: pointer to the new node
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right == NULL)
		parent->right = new_node;

	else
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node;
	}

	return (new_node);
}
