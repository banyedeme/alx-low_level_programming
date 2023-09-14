#include "lists.h"

/**
 * free_dlistint - free a doubly-linked list
 * @head: is a pointer
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
