#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds  linked list to end of node
 * @head: the list_t list double pointer
 * @str: string  new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *good;
	list_t *m = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	good = malloc(sizeof(list_t));
	if (!good)
		return (NULL);

	good->str = strdup(str);
	good->len = len;
	good->next = NULL;

	if (*head == NULL)
	{
		*head = good;
		return (good);
	}

	while (m->next)
		m = m->next;

	m->next = good;

	return (good);
}




