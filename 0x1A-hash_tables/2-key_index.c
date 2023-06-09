#include "hash_tables.h"

/**
 * key_index - generates the key index
 * @key: key for the value
 * @size: size of the array
 * Return: THe index at hich the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
