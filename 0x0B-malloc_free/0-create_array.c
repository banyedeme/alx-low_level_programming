#include <stdlib.h>
#include "main.h"
/**
 * create_array - print an array of characters and
 * init it with a specific char
 * @size: array size
 * @c: char to init array with
 * Return: NULL if size is 0 or if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{

	char *arr;

	unsigned int a;



	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)

		return (NULL);



	for (a = 0; a < size; a++)

		arr[a] = c;

	return (arr);

}

