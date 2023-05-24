#include "function_pointers.h"
/**
 * int_index - The fucnt to return 1st index place if compari = true, else -1
 * @array: array to loop through
 * @size: The array elements size
 * @cmp: pointer to the function of one of the 3 in main
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int z;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (z = 0; z < size; z++)
	{
		if (cmp(array[z]))
			return (z);
	}
	return (-1);
}

