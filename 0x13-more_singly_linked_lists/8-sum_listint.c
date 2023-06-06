#include "lists.h"

/**
 * sum_listint - calc the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting total
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temporal = head;

	while (temporal)
	{
		total += temporal->n;
		temporal = temporal->next;
	}

	return (total);
}

