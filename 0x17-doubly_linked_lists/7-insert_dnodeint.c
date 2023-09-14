#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node in a doubly-linked list
 * @h: Pointer to the beginning of the list
 * @idx: The index at which to insert a node
 * @n: the data to insert
 *
 * Return: the address of the new node, or NULL if it failed...
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev, *new;

	if (!idx)
		return (add_dnodeint(h, n));

	if (!h)
		return (NULL);

	prev = *h;

	if (!prev)
		return (NULL);

	while (--idx && prev->next)
		prev = prev->next;

	if (idx)
		return (NULL);

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = prev;
	new->next = prev->next;

	if (prev->next)
		prev->next->prev = new;

	prev->next = new;

	return (new);
}
