#include "main.h"


/**
 * mian - THis is the entry level of the application
 * Return: zero for ssuccess
 */

int main(void)
{
char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
	return (0);
}
