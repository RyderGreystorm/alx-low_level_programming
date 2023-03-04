#include "main.h"


/**
 * mian - THis is the entry level of the application
 * Return: zero for ssuccess
 */

int main(void)
{
   char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t); 	
	return (0);
}
