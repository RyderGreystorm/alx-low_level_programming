#include "main.h"

/**
 *argstostr - reads args and concatenates them
 *@ac: number of elements in arr
 *@av: array of strings
 *Return: pointer to the memory of array
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac - 1; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	}

	str = (char *) malloc(sizeof(char) * (len));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	return (str);

}
