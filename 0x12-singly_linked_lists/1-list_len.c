#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns linked list elements
 * @h: the list_t list pointer
 *
 * Return: the num of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t q = 0;

	while (h)
	{
		q++;
		h = h->next;
	}
	return (q);
}

