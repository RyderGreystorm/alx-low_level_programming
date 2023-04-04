#include "lists.h"

/**
 * get_nodeint_at_index - find node in a particular index
 * @head: address of the head pointer passed to the function
 * @index:position  at which node islocated
 * Return: the node found at the nth position
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int n = index;

	tmp = head;

	while (n != 0)
	{
		tmp = tmp->next;
		n--;
	}
	if (tmp == NULL)
		return (NULL);
	else
		return (tmp);
}
