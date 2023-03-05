#include "main.h"

/**
 * print_diagsums - prints diagonals of a matrix
 * @a: array of matrix
 * @size: size of matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			sum = sum + a[i][j];
		}
	}

	for (i == 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i + j = (size - 1));
			sum1 = sum1 + a[i][j];
		}
	}
	printf("%d, ", sum);
	printf("%d\n", sum1);
}
