#include "main.h"

/**
 * main - entry level of my function
 * Return: 0 for success;
 */

int main(void)
{
 int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
	return 0;
}
