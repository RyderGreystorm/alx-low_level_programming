#include "main.h"
#include <stdlib.h>

/**
 *print_last_digit - prints the last digit of an integer
 *@num: parameter allows argument of type int to be passed to function
 *Return: returns the last value of an int
 */

int print_last_digit(int num)
{
	int x;

	x = num % 10;
	if (x < 0)
	{
		x = abs(x);
		_putchar(x);
	}
	else
		_putchar(x);
	return x;
}
