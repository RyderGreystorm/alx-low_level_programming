#include "main.h"


/**
 * mian - THis is the entry level of the application
 * Return: zero for ssuccess
 */

int main(void)
{
 char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n); 	
	return (0);
}
