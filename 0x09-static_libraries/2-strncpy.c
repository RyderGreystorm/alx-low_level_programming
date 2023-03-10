#include "main.h"

/**
 * *_strncpy - copy a port of a string to the destination string
 * @dest: destination string
 * @src: source string
 * Return: char
 * @n: bytes to be copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
