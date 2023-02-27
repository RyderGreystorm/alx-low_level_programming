#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: params
 * Return: Void
 */

void puts_half(char *str)
{
	int i, len, ln;

	len = strlen(str);
	ln = len / 2;

	if (len % 2 == 1)
		ln = ln + (len - 1);
	for (i = ln; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
