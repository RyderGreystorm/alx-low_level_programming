#include "hash_tables.h"

/**
 * hash_table_set - insertion operation
 * @ht: able into which the insertion is going to be made
 * @key: key of the value
 * @value: value params
 * Return: 1 on success else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	char *tmp;
	unsigned long int index, j;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	tmp = strdup(value);
	if (tmp == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (j = index; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = tmp;
			return (1);
		}
	}

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
	{
		free(tmp);
		return (0);
	}
	item->key = strdup(key);
	if (item->key == NULL)
	{
		free(item);
		return (0);
	}
	item->value = tmp;
	item->next = ht->array[index];
	ht->array[index] = item;

	return (1);
}
