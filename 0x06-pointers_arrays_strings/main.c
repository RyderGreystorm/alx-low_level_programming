#include "main.h"

/**
 * main - entry level of our application
 * Retun: 0
 */



int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
	return 0;
}
