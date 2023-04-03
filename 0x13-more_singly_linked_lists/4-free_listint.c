#include "lists.h"

/**
 * free_listint - frees all pointers
 * @head: address of the head pointer
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
