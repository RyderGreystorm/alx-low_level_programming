#include "main.h"

/**
 * get_endianness - checks the endianness
 * @void: void
 * Return:0  for big, 1 for little;
 */

int get_endianness(void)
{
	unsigned int low = 1;

	char *ptr = (char *) &low;

	if (*ptr)
		return (1);
	else
		return (0);
}
