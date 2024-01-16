#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: pointer to the first element of the array to search
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: -1 if not found || index of value
  */

int binary_search(int *array, size_t size, int value)
{
	size_t num, sort, find;

	if (array == NULL)
		return (-1);

	for (find = 0, sort = size - 1; sort >= find;)
	{
		printf("Searching in array: ");
		for (num = find; num < sort; num++)
			printf("%d, ", array[num]);
		printf("%d\n", array[num]);

		num = find + (sort - find) / 2;
		if (array[num] == value)
			return (num);
		if (array[num] > value)
			sort = num - 1;
		else
			find = num + 1;
	}
	return (-1);
}
