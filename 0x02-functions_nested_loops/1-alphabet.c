#include "main.h"

/**
 * print_alphabet - prints out the lowecase alphabets
 * Return: This funcion has a return type void
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	putchar('\n');
}
