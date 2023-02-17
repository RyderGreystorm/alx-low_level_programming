#include <stdio.h>

/**
 * main - woking loops
 * Return: zero for success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i == 9)
		{
			putchar('\n');
			break;
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
