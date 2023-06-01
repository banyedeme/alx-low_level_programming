#include <stdio.h>
#include "lists.h"

/**
 * print_list - the linked list  elements to be printed
 * @h: the list_t list pointer
 *
 * Return: the nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->less, h->str);
		h = h->moi;
		x++;
	}

	return (x);
}

