#include "main.h"
#include <string.h>

/**
 * puts2 - prints the first and very other charater
 * @str: parameter
 * Return: void
 */

void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 1)
			continue;
		else
			_putchar(str[i]);
	}
	_putchar('\n');
}
