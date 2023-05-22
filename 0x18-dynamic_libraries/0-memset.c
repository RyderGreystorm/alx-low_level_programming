#include "main.h"

/**
 * _memset - fills an array with the same byte
 * @s: pointer to the array of bytes
 * @b: constant byte of character to be filled into the buffer
 * @n: unsigned int detailing the amount of bytes to be filled
 * Return: the content of the array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
