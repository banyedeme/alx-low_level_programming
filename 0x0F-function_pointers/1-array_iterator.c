#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints each array element on newline
 * @array: pointer to array
 * @size: number of elements to be printed
 * @action: pointer to print
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

