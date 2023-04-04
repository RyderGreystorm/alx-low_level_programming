#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at the nth position
 * @head: address of the head pointer pased as params
 * @idx: posiiton to nsert new node at
 * @n: data new node carries
 * Return: address to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;

	if (idx == 0)
	{
		*head = new;
		return (new);
	}

	ptr = *head;

	idx--;

	while (idx != 0 && ptr != NULL)
	{
		ptr = ptr->next;
		idx--;
	}
	if (ptr == NULL)
		return (NULL);
	new->next = ptr->next;
	ptr->next = new;
	return (new);

}
