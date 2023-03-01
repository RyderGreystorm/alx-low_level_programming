#include "main.h"

/**
 * reverse_array - sorts arrays from highest value
 *@a: array
 *@n: lenght he array
 *Return:arrrray
 */

void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; i < (n / 2); i++)
	{
		x = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = x;
	}
}
