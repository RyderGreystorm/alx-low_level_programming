#include <stdio.h>

/**
 * main - entery level of our application
 *Return: zero for success
 */

int main(void)
{

	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; j <= 9; j++)
			{
				if (i != j && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');

					if (i == 7 && j == 8 && k == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
