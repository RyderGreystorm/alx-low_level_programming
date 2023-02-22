#include "main.h"

/**
 * print_to_98 - takes number and prints to 98
 * @n: integer parameter passed as argument to the function
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(",");
			printf(" ");
		}
		printf("\n");
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(",");
			printf(" ");
		}
		printf("\n");
	}
}
