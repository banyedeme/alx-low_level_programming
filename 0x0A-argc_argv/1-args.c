#include <stdio.h>
#include "main.h"

/**
 * main - Outputs num of args passed to the program
 * @argc: number of args
 * @argv: array of args
 * Return: 0 to indcate success
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

