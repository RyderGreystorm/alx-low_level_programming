#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: string
 * @accept: second string params
 * Return: char pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char *match;

	match = strpbrk(s, accept);
	return (match);
}
