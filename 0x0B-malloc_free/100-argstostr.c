#include "main.h"

/**
 *argstostr - reads args and concatenates them
 *@ac: number of elements in arr
 *@av: array of strings
 *Return: pointer to the memory of array
 */

char *argstostr(int ac, char **av)
{
	int i, j, n, len;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}

	ptr = (char *) malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[n] = av[i][j];
			n++;
		}
		ptr[n] = '\n';
		n++;
	}
	return (ptr);
}
