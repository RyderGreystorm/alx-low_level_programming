#include <stdio.h>

/**
 * main - inversely printing alphabets
 * Return: 0 if success
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
