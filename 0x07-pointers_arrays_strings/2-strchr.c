#include "main.h"

/**
 * _strchr - finds a value in a string
 * @s: string
 * @c: character we are searching for
 * Return: string
 */

char *_strchr(char *s, char c)
{
	s = strchr(s, c);
	return (s);
}
