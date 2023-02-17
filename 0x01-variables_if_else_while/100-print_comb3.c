#include <stdio.h>

/**
 * main - entry point
 * Return: zero for success
 */

int main(void)
{

	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 9 && j == 9)
			{
				putchar('\n');
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
