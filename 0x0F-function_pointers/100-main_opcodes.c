#include <stdlib.h>
#include <stdio.h>

/**
 * main - printing own opcodes
 * @argc: arguments count
 * @argv: string of arrays for the arguments
 *
 * Return: return 0 to indicate success
 */
int main(int argc, char *argv[])
{
	int b, c;
	char *arrc;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arrc = (char *)main;

	for (c = 0; c < b; c++)
	{
		if (c == b - 1)
		{
			printf("%02hhx\n", arrc[c]);
			break;
		}
		printf("%02hhx ", arrc[c]);
	}
	return (0);
}

