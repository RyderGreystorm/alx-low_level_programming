#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_abs - takes an integer and returns its absolute value
 *Return: an integer value
 *@i: parameter accepted by our function
 */

int _abs(int i)
{
	if (i < 0)
		return (-i);
	else if (i > 0)
		return (i);
	else
		return (0);
}
