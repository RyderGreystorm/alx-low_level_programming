#include "main.h"

/**
 * flip_bits - finds the number of bits you 
 * would need to flip to get from one number to another.
 * @n: number 1 params
 * @m: number two params
 * Return: number of bits changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m, num = 0;

	while (i > 0)
	{
		num = num + (i & 1);
		i = i >> 1;
	}
	return (num);
}
