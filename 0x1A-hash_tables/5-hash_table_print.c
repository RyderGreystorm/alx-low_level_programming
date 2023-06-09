#include "hash_tables.h"

/**
 * hash_table_print - print table
 * @ht: pointer to table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int check = 0;

	printf("{");
	if (ht != NULL && ht->array != NULL && ht->size != 0)
	{
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				if (check)
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				check = 1;
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
