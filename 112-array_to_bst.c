#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: the number of elements in the array
 * Return: a pointer to the root node of the created BST, or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int n;
	bst_t *root = NULL;

	for (n = 0; n < size; n++)
		bst_insert(&root, array[n]);

	return (root);
}
