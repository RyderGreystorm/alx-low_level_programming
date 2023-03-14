#include "main.h"

/**
 * *alloc_grid - creates a grid using pointers
 * @width: row of the matrix
 * @height: coloumn of the matrix
 * Return: pointer to the memory address of the metric
 */

int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **) malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			free(ptr);
		for (j = 0; j <= i; j++)
			free(ptr[j]);
		return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);

	free(ptr);
	ptr = NULL;
}
