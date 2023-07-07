#include <stdio.h>
#include "main.h"
/**
 * main - Outputs all args passed to it
 * @argc: num of args
 * @argv: array of args
 * Return: The program will return 0 to indicate success
 */
int main(int argc, char *argv[])
{
	int num;

	for (num = 0; num < argc; num++)
	{
		printf("%s\n", argv[num]);
	}

	return (0);
}

