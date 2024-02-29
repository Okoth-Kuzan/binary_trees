#include "binary_trees.h"

/**
 * tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = tree_height(tree->left);
	height_r = tree_height(tree->right);

	return (height_l > height_r ? height_l + 1 : height_r + 1);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree_height(tree) - 1);
}

