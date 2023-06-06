#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *dove = head;
	listint_t *eagle = head;

	if (!head)
		return (NULL);

	while (dove && eagle && eagle->next)
	{
		eagle = eagle->next->next;
		dove = dove->next;
		if (eagle == dove)
		{
			dove = head;
			while (dove != eagle)
			{
				dove = dove->next;
				eagle = eagle->next;
			}
			return (eagle);
		}
	}

	return (NULL);
}


