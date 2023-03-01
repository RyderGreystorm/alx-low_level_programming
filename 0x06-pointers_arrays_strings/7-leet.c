#include "main.h"

/**
 * leet - encodes a text
 * @str: pointer passed as parameter
 * Return: char
 */

char *leet(char *str)
{
	int i, j;
	char ss[] = "aAeEoOtTlL";
	char sn[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == ss[j])
				str[i] = sn[j];
		}
	}
	return (str);
}
