#include "variadic_functions.h"

/**
 *print_strings - prints strings passed as params to the standard output
 *@separator: params
 *@n: number of variables passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;

	unsigned int i;
	char *s;

	if (separator == NULL)
		separator = NULL;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(string, char*);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(string);
}
