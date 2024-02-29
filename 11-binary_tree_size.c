#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to measure the size of
 *
 * Return: size of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *stack[1000];
	size_t size = 0;
	int top = -1;

	if (tree == NULL)
		return (0);

	stack[++top] = tree;

	while (top >= 0)
	{
		const binary_tree_t *current = stack[top--];
		size++;

		if (current->left != NULL)
			stack[++top] = current->left;

		if (current->right != NULL)
			stack[++top] = current->right;
	}

	return (size);
}

