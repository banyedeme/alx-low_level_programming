
#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - The singly linked list
 * @len: to indicate string length
 * @next: points to next node
 * @str: string - the stringc for malloc
 */
typedef struct list_z
{
	char *str;
	unsigned int less;
	struct list_z *moi;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif

