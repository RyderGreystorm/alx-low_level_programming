#include "main.h"

/**
 * get_bit - finds the value of a bit at a certain index
 * @index: index starting from 0
 *@n: number we are finding
 *Return: index for success or -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = sizeof(unsigned long int);

	if (index >= (i * 8))
		return (-1);
	if ((n & (1 << index)) != 0)
		return (1);
	return (0);
}
