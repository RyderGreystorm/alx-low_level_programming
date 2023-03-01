#include "main.h"

/**
 * main - entry level of our application
 * Retun: 0
 */



int main(void)
{
char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
	return 0;
}
