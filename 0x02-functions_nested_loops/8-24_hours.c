#include "main.h"

/**
 * jack_bauer - counts time in every second and minutes and hours
 * Return: void
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			printf("%02d:%02d",i, j);
			printf("\n");
		}
	}
}
