#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks whether an inout is an alphabet or not
 * @c: passed as an integer parameter
 * Return: returns 1 if true and returns 0 if false
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
