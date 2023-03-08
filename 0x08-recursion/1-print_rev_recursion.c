#include "main.h"

/**
 * _print_rev_recursion - prints an input string in reverse
 * @s: passed as a parameter
 * Return: 0;
 */

void _print_rev_recursion(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = len; i >= 0; i--)
		_putchar(s[i]);
}
