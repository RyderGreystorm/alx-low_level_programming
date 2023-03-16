#include "main.h"

/**
 * array_range - creates an array in accending order
 * @min: minium params
 * @max: maximum
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int i, *ptr, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
