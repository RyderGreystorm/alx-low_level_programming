#include "main.h"

/**
 * str_concat - concatenates two strings using malloc
 * @s1: destination string
 * @s2: source string
 * Return: pointer to string
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *ptr;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	len1 = strlen(s1);
	len2 = strlen(s2);

	ptr = (char *) malloc(sizeof(char) * (len1 + len2 + 1));

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < len2; j++)
		ptr[len1 + j] = s2[j];

	ptr[len1 + len2] = '\0';

	return (ptr);

	free(ptr);
	ptr = NULL;
}
