#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node);
/**
 * binary_tree_uncle -  a function that finds the uncle of a node
 *
 * @node: pointer to the node to find its uncle
 *
 * Return: pointer to the uncle node
 * NULL if node is NULL
 * NULL if node has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (node == NULL)
		return (NULL);

	uncle = (binary_tree_sibling(node->parent));
	return (uncle);
}

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 *
 * @node: pointer to the node to find the siblings
 *
 * Return: NULL if node is NULL or parent is NULL
 * if node has no siblings, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->right != node)
		return (node->parent->right);
	return (node->parent->left);
}
