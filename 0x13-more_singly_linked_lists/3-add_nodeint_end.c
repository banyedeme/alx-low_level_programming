#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *latest;
	listint_t *temporal = *head;

	latest = malloc(sizeof(listint_t));
	if (!latest)
		return (NULL);

	latest->n = n;
	latest->next = NULL;

	if (*head == NULL)
	{
		*head = latest;
		return (latest);
	}

	while (temporal->next)
		temporal = temporal->next;

	temporal->next = latest;

	return (latest);
}

