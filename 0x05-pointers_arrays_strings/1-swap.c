#include "main.h"

/**
 * swap_int - swaps the position of two values passed as args
 * @a: first parameter
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
