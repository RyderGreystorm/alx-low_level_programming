#include "function_pointers.h"

/**
 * int_index - returns index of the first element in cmp
 * @array: array containing elements
 * @size: size of the array
 * @cmp: pointer to the function being used to do the cmp
 * Return: pointer to the index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
	return (-1);
}
