#include "search_algos.h"

int binary_searcher(int *array, size_t left, size_t right, int value);

/**
 * exponential_search -searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: the number of elements in an array
 * @value: the value to search for
 * Return: index of the value || -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t  sort;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i *= 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	sort = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, sort);
	return (binary_searcher(array, i / 2, sort, value));
}



/**
  * binary_searcher - Searches for a value in a sorted array
  *                  of integers using binary search
  * @array: points to the first element of the array to search
  * @down: starting index of the [sub]array to search
  * @up: ending index of the [sub]array to search
  * @value: value to search for
  * Return: -1 if not found || index of value
  */

int binary_searcher(int *array, size_t down, size_t up, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (up >= down)
	{
		printf("Searching in array: ");
		for (i = down; i < up; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = down + (up - down) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			up = i - 1;
		else
			down = i + 1;
	}

	return (-1);
}
