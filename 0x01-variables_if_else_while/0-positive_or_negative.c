#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry to determine if a number is + ,- or 0
 *
 * Return: Always 0 (Success) indicating successful end of the program
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
