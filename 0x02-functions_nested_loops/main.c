#include "main.h"

/**
 * main - entry level of my function
 * Return: 0 for success;
 */

int main(void)
{
    int r;

    r = print_last_digit(98);
    r = print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
	return 0;
}
