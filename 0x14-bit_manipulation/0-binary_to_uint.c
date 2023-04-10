#include "main.h"

/**
 *  binary_to_uint- converst binary to an unsigned int
 * @b: pointer to an arrya of strings
 * Return: the converted valur
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, expo = 1, rem, bin, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		i++;
	}

	bin = atoi(b);

	while (bin != 0)
	{
		rem = bin % 10;
		num = num + (expo * rem);
		expo = expo * 2;
		bin = bin / 10;
	}
	return (num);
}
