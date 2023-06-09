#include "hash_tables.h"

/**
 * hash_table_get - get value from the tabe using key
 * @ht: hash table pointer
 * @key: key used to search for value in the table
 * Return: the valuee associated with thekey or NULL if key doesnt exist
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tmp = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	/*traverse the array in search of key*/
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}

	}

	return (NULL);
}
