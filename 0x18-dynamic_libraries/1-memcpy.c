#include "main.h"

/**
 *_memcpy - copies acertain byte of memory to another byte of memory
 * @dest: destination memory where bytes are copied to
 * @src: current pointer holding the bytes of interest
 * @n: number of bytes being copied
 * Return: destination memory where bytes have been copied to
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
