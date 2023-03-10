#include "main.h"

/**
 * main - entry level of the application
 * @argc: params that counts the number of inputs passed on the command line
 * @argv: char pointer
 * Return: 0 for success
 */

int main(int argc, char **argv __attribute__((unused)))
{
	int sum, i;

	for (i = 0; i < argc; i++)
		sum += i;
	printf("%d\n", sum);
	return (0);
}
