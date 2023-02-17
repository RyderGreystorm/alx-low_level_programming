#include <stdio.h>

/**
 * main - Entry level into our application
 * Return: zero for succes
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
