#include <stdio.h>

/**
 * mian - entery point of our application
 * Return: zero for success
 * natural_num - prints the sum of natural numbers that are factors of 3 and 5
 * Return: void
 */

void natural_num(void);


int main(void)
{
	natural_num();
	return (0);
}

void natural_num(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
}
