#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the times table
 * Return: void
 */

void times_table(void)
{
	int i, j, x, y, c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0, y = 1; j < 10; j++, y++)
		{
			x = i * j;
			c = i * y;
			if (c > 9 && j != 9)
				printf("%d, ", x);
			else if (j == 9)
				printf("%d", x);
			else
				printf("%d,  ", x);
		}
		printf("\n");
	}
}
