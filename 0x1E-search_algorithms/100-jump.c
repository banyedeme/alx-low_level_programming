#include "search_algos.h"

/**
 * jump_search - searches for a vulue in a sorted array
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: value to search for
 * Return: the first index of the value in the array
 */

int jump_search(int *array, size_t size, int value)
{
	int i, n, skip, first;

	if (array == NULL || size == 0)
		return (-1);

	n = (int)sqrt((double)size);
	skip = 0;
	first = i = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		skip++;
		first = i;
		i = skip * n;
	} while (i < (int)size && array[i] < value);

	printf("Value found between indexes [%d] and [%d]\n", first, i);

	for (; first <= i && first < (int)size; first++)
	{
		printf("Value checked array[%d] = [%d]\n", first, array[first]);
		if (array[first] == value)
			return (first);
	}

	return (-1);
}
