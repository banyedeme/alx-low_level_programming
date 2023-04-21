#include <stdio.h>
/**
 * main - the start of the program
 *This program will print lowercase and uppercase letter and a lin
 *Return:  always 0 indicating success
 */
int main(void)
{
	int a = 97;
	int b = 65;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	Return (0);
}
