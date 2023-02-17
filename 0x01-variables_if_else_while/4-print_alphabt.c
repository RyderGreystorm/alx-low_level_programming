#include <stdio.h>

/**
 * main - entry level of the application
 * REturn: 0 for succes
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
