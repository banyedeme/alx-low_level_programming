#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"
#include <stdlib.h>
/**
 * main - funct that Prints the result of simple operations.
 * @argc: The num of parameters accepted.
 * @argv:  arguments vector pointer.
 *
 * Return: 0 to indicate success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int m, n;
	char *papa;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	m = atoi(argv[1]);
	papa = argv[2];
	n = atoi(argv[3]);

	if (get_op_func(papa) == NULL || papa[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*papa == '/' && n == 0) ||
	    (*papa == '%' && n == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(papa)(m, n));

	return (0);
}

