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
	unsigned long int index;
	hash_node_t *node = NULL, *current = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);

	/*create new node*/
	node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	current = ht->array[index];

	if (current == NULL)
		ht->array[index] = node;
	else if (strcmp(current->key, key) == 0)
	{
		free(current->value);
		current->value = NULL;
		if (value != NULL)
		{
			current->value = (char *) malloc(sizeof(char) * (strlen(value) + 1));
			strcpy(current->value, value);
		}
	}
	else
	{
		node->next = current;
		ht->array[index] = node;
	}
	return (1);
}
