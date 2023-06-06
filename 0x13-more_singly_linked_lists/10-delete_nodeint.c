#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporal = *head;
	listint_t *new = NULL;
	unsigned int m = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temporal);
		return (1);
	}

	while (m < index - 1)
	{
		if (!temporal || !(temporal->next))
			return (-1);
		temporal = temporal->next;
		m++;
	}


	new = temporal->next;
	temporal->next = new->next;
	free(new);

	return (1);
}

