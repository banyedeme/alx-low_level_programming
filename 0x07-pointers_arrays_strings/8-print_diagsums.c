#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of square matrix of integers
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int total1, total2, x;

	total1 = 0;
	total2 = 0;

	for (x = 0; x < size; x++)
	{
		total1 = total1 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		total2 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", total1, total2);
}

