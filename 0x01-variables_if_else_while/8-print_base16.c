#include <stdio.h>

/**
 * main - entry level of the app
 * Return: zero for success
 */

int main(void)
{

	int i, j;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
