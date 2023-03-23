#include "variadic_functions.h"

/**
 * print_numbers - prints to the stdo numbers passed as parameters
 * @separator: string params
 * @n: number of arguments passed
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int x, i;

	if (separator == NULL)
		separator = NULL;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		printf("%d", x);

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}