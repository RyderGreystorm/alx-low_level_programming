#include "main.h"

/**
 * main - Entry level of this application
 * Return: 0 for success
 */

int main(void)
{
	char put[] = "_putchar";
	int i;
	int size = sizeof(put)/sizeof(put[0]);

	for (i = 0; i < size; i++)
		_putchar(put[i]);
	_putchar('\n');

	return 0;
}
