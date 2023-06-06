#include "lists.h"

/**
 * add_nodeint - adds a new node at the start of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* declare node */
	listint_t *latest;

	/* allocating memory to new node */
	latest = malloc(sizeof(listint_t));
	/* testing to see if new node is not point to NULL */
	if (!latest)
		return (NULL);

	/* Assigning addresses */
	latest->n = n;
	latest->next = *head;
	*head = latest;

	return (latest);
}

