#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	end = *head;

	if (end != NULL)
	{
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = end;

	return (new);
}
