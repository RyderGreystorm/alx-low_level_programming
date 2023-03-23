#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: number of arguments
 * Return: the total sum of the parameters passed to the function
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
