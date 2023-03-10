#include "main.h"

/**
 * _isdigit - checks if an inout is a digit or not
 * Return: 1 for success and 0 for failure
 * @c: parameter used to pass argument ot the function
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
