#include "lists.h"
/**
 * add_node - adds a new node to the beginning of the linked lis
 * @head: head pointer
 * @str: data passed to new node
 * Return: address to the new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->next = *head;
	ptr->len = strlen(str);

	*head = ptr;

	return (ptr);
}
