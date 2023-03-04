#include "main.h"

/**
 * _strchr - finds a value in a string
 * @s: string
 * @c: character we are searching for
 * Return: string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (NULL);
}
