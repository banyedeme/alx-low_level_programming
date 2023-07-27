
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - The function frees a linked list
 * @head: the list_t list to be set  free
 */
void free_list(list_t *head)
{
	list_t *good;

	while (head)
	{
		good = head->next;
		free(head->str);
		free(head);
		head = good;
	}
}

