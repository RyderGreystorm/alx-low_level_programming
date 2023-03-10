#include "main.h"

/**
 * _strstr - locates the first occurance of a substring
 * @haystack: first params
 * @needle: second params
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	char *string;

	string = strstr(haystack, needle);
	return (string);
}
