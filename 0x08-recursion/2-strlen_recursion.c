#include "main.h"

/**
 * _strlen_recursion - finds the length of the string
 * @s: string passed as params
 * Return: length of the string as int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
