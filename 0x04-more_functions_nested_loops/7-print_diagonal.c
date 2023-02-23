#include "main.h"

/**
 * print_diagonal - draws lines diagonally
 * @n: params that passes an arg to func
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n == 0 || n < 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
