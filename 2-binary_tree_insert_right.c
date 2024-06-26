#include "binary_trees.h"

/**
* binary_tree_insert_right - function that inserts a node as the
* right-child of another node.
* @parent: parent of the node.
* @value: value of the node.
* Return: a pointer to the new node otherwise NULL (On failure)
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
	return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = parent->right;
	new_node->left = NULL;

	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
