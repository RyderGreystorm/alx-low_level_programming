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
			_putchar(n + '0');
			if (n == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			_putchar(n + '0');
			if (n == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
}
