#include "main.h"

/**
 * string_toupper - converts string to upper case
 * @str: takes array of characters as parameter
 * Return: 0;
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
