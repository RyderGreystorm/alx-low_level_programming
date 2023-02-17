#include <stdio.h>

/**
 * mian - Usuing continue keyword
 * Return: 0 for success
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}

	putchar('\n');

	return (0);
}
