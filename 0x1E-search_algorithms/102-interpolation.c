#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search
 *
 * Return: first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, up, d;

	if (array == NULL)
		return (-1);

	for (up = 0, d = size - 1; d >= up;)
	{
		i = up + (((double)(d - up) / (array[d] - array[up])) * (value - array[up]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			d = i - 1;
		else
			up = i + 1;
	}

	return (-1);
}
