#include "hash_tables.h"
/**
 * hash_table_delete - frees table
 * @ht: pointer to the table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *curr;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				curr = tmp->next;
				free(tmp->value);
				free(tmp->key);
				free(tmp);
				tmp = curr;
			}

		}
	}
	free(ht->array);
	free(ht);
}
