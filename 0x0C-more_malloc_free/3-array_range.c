#include "main.h"

/**
 * array_range - creates an array in accending order
 * @min: minium params
 * @max: maximum
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * max);

	if (ptr == NULL)
		return (NULL);

	for (i = min; i < max; i++)
		ptr[i] = min++;

	return (ptr);
}
