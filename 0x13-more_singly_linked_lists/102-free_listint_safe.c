#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: num of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t x = 0;
	int y;
	listint_t *temporal;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		y = *h - (*h)->next;
		if (y > 0)
		{
			temporal = (*h)->next;
			free(*h);
			*h = temporal;
			x++;
		}
		else
		{
			free(*h);
			*h = NULL;
			x++;
			break;
		}
	}

	*h = NULL;

	return (x);
}



