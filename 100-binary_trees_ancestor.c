#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary-trees_ancestor - a function that finds the lowest common ancestor
 * of two nodes
 *
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node of 2 given nodes
 * NULL if no ancestor was found
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (first->parent == second->parent)
		return (first->parent);
	if (first->left == second || first->right == second)
		return ((binary_tree_t *)first);
	if (second->left == first || second->right == first)
		return ((binary_tree_t *)second);
	if (second->parent->parent->left == first)
		return (second->parent->parent);
	if (second->parent->parent->right == first)
		return (second->parent->parent);
	if (first->parent->parent->left == second)
		return (first->parent->parent);
	if (first->parent->parent->right == second)
		return (first->parent->parent);
	return (NULL);
}
