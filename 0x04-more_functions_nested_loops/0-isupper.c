#include "main.h"

/**
 * _isupper - checks if a character is uppercase or not
 *@c: takes an argument for the function
 *Return: 0 for failure and 1 for true
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
