#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: destnation string
 * @s2: source string
 * @n: bytes of source string to be concatenated to the destination
 * Return: pointer to the memory allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, len;

	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = strlen(s1);

	ptr = malloc(sizeof(char) * (len + n + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[len + j] = s2[j];

	ptr[len + n] = '\0';

	return (ptr);


}
