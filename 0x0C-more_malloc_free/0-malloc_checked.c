#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked -function to allocates memory using malloc
 * @b: numb of bytes to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *num;

	num = malloc(b);

	if (num == NULL)
		exit(98);

	return (num);
}

