#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - displays the minimum number of coins to
 * make change for an amount of money
 * @argc: num of args
 * @argv: array of args
 * Return: 0 for (Success), 1 for (Error)
 */
int main(int argc, char *argv[])
{
	int num1, x, res;
	int money[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	res = 0;

	if (num1 < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && num1 >= 0; x++)
	{
		while (num1 >= money[x])
		{
			res++;
			num1 -= money[x];
		}
	}

	printf("%d\n", res);
	return (0);
}

