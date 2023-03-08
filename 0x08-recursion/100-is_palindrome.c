#include "main.h"

/**
 * is_palindrome - checks if a string would be the same if reversed
 * @s: string passed as params
 * Return: 0 if false and 1 if true
 */

int is_palindrome(char *s)
{
	int low = 0, high = (strlen(s) - 1), x;

	while (high > low)
	{
		if (s[low++] != s[high--])
			return (x = 0);
	}
	return (x = 1);
}
