#include "main.h"

/**
 * _strdup - uses malloc() to duplicate a string in memory
 * @str: string passed as parameter to be duplicated to a memory address
 * Return: pointer to memory of duplicated string
 */


char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
		return (NULL);

	ptr = (char *) malloc(strlen(str));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];

	return (ptr);

	free(ptr);
	ptr = NULL;
}
