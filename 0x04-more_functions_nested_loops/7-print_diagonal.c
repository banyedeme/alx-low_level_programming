#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * folowed by a new line
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int m, x;

		for (m = 0; m < n; m++)
		{
			for (x = 0; x < n; x++)
			{
				if (x == m)
					_putchar('\\');
				else if (x < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

