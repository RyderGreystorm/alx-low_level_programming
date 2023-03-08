#include "main.h"

int my_prime(int n, int i);

/**
 * is_prime_number - checks for prime number
 * @n: params
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (my_prime(n, n - 1));
}

/**
 * my_prime - calculates if a number is prime recursively
 * @n: params
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int my_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (my_prime(n, i - 1));
}
