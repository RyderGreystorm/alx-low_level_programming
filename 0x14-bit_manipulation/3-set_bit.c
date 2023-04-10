#include "main.h"

/**
 *
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number being passed for operation
 * @index: index of operation
 * Return 1 for success and -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = sizeof(unsigned long int) + 8;

	if (index >= i)
		return (-1);
	*n = *n ^ (1 << index);

	return (1);
}
