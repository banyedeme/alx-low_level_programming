#include <stdio.h>
#include "main.h"

/**
 * main - outputs the name of the program
 * @argc: num of arg
 * @argv: array of arg
 * Return: 0 indicating progam success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

