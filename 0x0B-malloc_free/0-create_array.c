#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars and init it with a specific char
 * @size: size of array
 * @c: char to initialize the array with
 * Return: On success, returns a pointer to the created array.
 * Returns NULL if size is 0 or if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *array = malloc(size * sizeof(char));

	if (array == (NULL);
			{
			return (NULL);
			}
			for (unsigned int n = 0; n < size; n++)
			{
			array[n] = c;
			}
	return (array);

}
