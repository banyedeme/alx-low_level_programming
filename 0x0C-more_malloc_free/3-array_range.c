#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creating  an array of integers
 * @min: mn range of values stored
 * @max: num of elements and maxi range of values stored
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *z;
	int y, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	z = malloc(sizeof(int) * size);

	if (z == NULL)
		return (NULL);

	for (y = 0; min <= max; y++)
		z[y] = min++;

	return (z);
}

