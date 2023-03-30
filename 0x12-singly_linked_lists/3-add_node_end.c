#include "lists.h"

/**
 * add_node_end - adds a new node to the beginning of the linked list
 * @head: pointer of last node
 * @str: the data of the new node;
 * Return: return pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->next = NULL;
	ptr->len = strlen(str);

	if (*head == NULL)
		return (*head = ptr);

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = ptr;

	return (ptr);
}
