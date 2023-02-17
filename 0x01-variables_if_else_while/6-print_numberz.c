#include <stdio.h>

/**
 * main - entry level of our app
 * Return: zero for success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
