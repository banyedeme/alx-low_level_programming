#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting of the program
 * @argc: The num of  args passed to the program
 * @argv: An array of strings of the arguments
 * Return: 0 for success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;
	/* Check if the program passed exactly two arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the arguments to integers */
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	/* Multiply the two numbers and print the result */
	result = n1 * n2;
	printf("%d\n", result);
	return (0);
}
