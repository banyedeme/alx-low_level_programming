#include <stdio.h>

/**
 * main - outputs all possible combinations of single-digit numbers
 * Return: Indicates Always 0 (Success)
 */
int main(void)
{
	int m;

	for (m = 48; m < 58; m++)
	{
		putchar(m);
		if (m != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

