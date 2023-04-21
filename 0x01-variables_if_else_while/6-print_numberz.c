#include <stdio.h>

/**
 * main - outputs all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	for (n = 0; n <= 9; b++)
	{
		putchar(b + 48);
	}
	putchar('\n');
	return (0);
}

