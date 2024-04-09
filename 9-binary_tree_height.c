#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: height of the tree or 0 if NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_tree_height;
	size_t right_tree_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_tree_height = binary_tree_height(tree->left);
	right_tree_height = binary_tree_height(tree->right);

	if (right_tree_height > left_tree_height)
		return (right_tree_height + 1);
	else
		return (left_tree_height + 1); /* add one for root counting*/
}
