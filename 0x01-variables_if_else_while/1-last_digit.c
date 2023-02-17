#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry level of the application
 * Return: zero for success
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int x = n % 10;

	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (x == 0)
	{
		printf("Last digit of %d is %d\n", n, x);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 but not zero\n", n, x);
	}
	return (0);
}
