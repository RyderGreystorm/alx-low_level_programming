#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest as string
 */

char *_strcat(char *dest, char *src)
{
	int len, len1, i;

	len = strlen(dest);
	len1 = strlen(src);

	for (i = 0; i < len1; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
