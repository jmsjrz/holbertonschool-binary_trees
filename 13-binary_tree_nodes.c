#include "binary_trees.h"
/**
* binary_tree_nodes - counts the nodes with at least 1 child
* @tree: pointer to the root node
* Return: number of nodes with at least 1 child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
