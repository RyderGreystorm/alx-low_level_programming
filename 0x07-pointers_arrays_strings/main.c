#include "main.h"


/**
 * mian - THis is the entry level of the application
 * Return: zero for ssuccess
 */

int main(void)
{
char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    } 	
	return (0);
}
