#include "main.h"

/**
 * _print_rev_recursion - prints an input string in reverse
 * @s: passed as a parameter
 * Return: 0;
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
