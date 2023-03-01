#include "main.h"

/**
 * rot13 - used for encrypting a message
 * @str: parameter of the function
 * Return: char
 */

char *rot13(char *str)
{
	int i, j;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ss[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == s[j])
			{
				str[i] = ss[j];
				break;
			}
		}
	}
	return (str);

}
