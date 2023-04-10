#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: number to be operated on
 * @index: ith index
 * Return: 1 for sucess and -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = sizeof(unsigned long int) * 8;

	if (i <= index)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
