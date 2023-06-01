#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - appends new node at the start of  linked list
 * @head: list_t list double pointer
 * @str: new string to be added to node
 *
 * Return: returns address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *good;
	unsigned int q = 0;

	while (str[q])
		q++;

	good = malloc(sizeof(list_t));
	if (!good)
		return (NULL);

	good->str = strdup(str);
	good->q = q;
	good->next = (*head);
	(*head) = good;

	return (*head);
}

