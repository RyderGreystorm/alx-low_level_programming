#include "main.h"

/**
 * main - entry level of our application
 * @argc: int params for CL arguments
 * @argv: string params
 * Return: 0 for sucess
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
