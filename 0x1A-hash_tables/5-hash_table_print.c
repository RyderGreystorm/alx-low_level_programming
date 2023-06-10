#include "hash_tables.h"

/**
 * hash_table_print - print table
 * @ht: pointer to table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *item;
	unsigned long int i;
	unsigned char check = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (check == 1)
				printf(", ");

			item = ht->array[i];
			while (item != NULL)
			{
				printf("'%s': '%s'", item->key, item->value);
				item = item->next;
				if (item != NULL)
					printf(", ");
			}
			check = 1;
		}
	}
	printf("}\n");
}
