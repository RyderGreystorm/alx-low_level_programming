#include "hash_tables.h"

/**
 * free_array - free content of the array
 * @item: array elements
 */

void free_array(hash_node_t *item)
{
	free(item->value);
	free(item->key);
	free(item);
}
/**
 * hash_table_delete - frees table
 * @ht: pointer to the table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			free(tmp->value);
			free(tmp->key);
			tmp = tmp->next;
		}
		free(tmp);
	}
	free(ht->array);
	free(ht);
}
