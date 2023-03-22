#include "function_pointers.h"

/**
 * array_iterator - contains an array of function pointers
 * @array: array contatining pointers to functions
 * @size: size of the array
 * @action: pointer to other function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL || array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
