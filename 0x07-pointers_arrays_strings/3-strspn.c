#include "main.h"

/**
 * _strspn - finds the lenth of a prefix substring
 * @s: string 1
 * @accept: string2
 * Return: char
 */

unsigned int _strspn(char *s, char *accept)
{
	size_t count;

	count = strspn(s, accept);
	return (count);
}
