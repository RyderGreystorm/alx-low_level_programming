#include "function_pointers.h"

/**
 * print_name - prints the name passed as argument
 * @name: string passed as argument
 * @f: pointer to a function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
