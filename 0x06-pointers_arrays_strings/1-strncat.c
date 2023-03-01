#include "main.h"

/**
 * _strncat - appends a string from a source to a destination
 * Return: string
 * @dest: desetination string
 * @src: source string
 * @n: number of bytes being concatenated to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
