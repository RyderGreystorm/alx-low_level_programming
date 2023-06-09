#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the arry
 * Return: pointer to the nearly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

	if (size <= 0)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	/*Initializing array members to NULL*/
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
