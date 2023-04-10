#include "main.h"

/**
 *  binary_to_uint- converst binary to an unsigned int
 * @b: pointer to an arrya of strings
 * Return: the converted valur
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		num = 2 * num + (b[i] - '0');
		i++;
	}
	return (num);
}
