#include "main.h"
#include <ctype.h>

/**
 * _islower - Takes an argument of type char and checks if its lowercase
 * Return: 1 if its lowercase and 0 otherwise
 *@c: is of type int
 */

int _islower(int c)
{

	if (islower(c))
		return (1);
	else
		return (0);
}
