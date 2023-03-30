#include "lists.h"

/**
 * free-list - frees all allocated space to prevent memory leak
 * @head: head pointer
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;

		free(head->str);
		free(head);

		head = tmp;
	}
}
