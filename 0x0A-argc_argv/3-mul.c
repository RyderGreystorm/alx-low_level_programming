#include "main.h"

/**
 * main - entry level of our application
 * @argc: int params for CL arguments
 * @argv: string params
 * Return: 0 for sucess
 */

int main(int argc, char **argv)
{
	int sum, num1, num2;

	if (argc != 3)
		return (printf("Error\n"));

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum = num1 * num2;
	printf("%d\n", sum);
	return (0);
}
