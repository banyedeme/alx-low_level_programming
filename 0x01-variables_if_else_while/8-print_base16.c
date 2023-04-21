#include <stdio.h>

/**
 * main - Outputs all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: 0 to dicate (Success)
 */
int main(void)
{
	int c;
	char ch;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

