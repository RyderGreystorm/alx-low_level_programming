#include <stdio.h>
#include "main.h"

/**
 * main -entry level into our app
 * Return: 0;
 */

int main(void)
{
char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
	return (0);
}
