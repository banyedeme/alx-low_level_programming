#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: num to print in binary
 */
void print_binary(unsigned long int n)
{
	int x, counted = 0;
	unsigned long int current;

	for (x = 63; x >= 0; x--)
	{
		current = n >> x;

		if (current & 1)
		{
			_putchar('1');
			counted++;
		}
		else if (counted)
			_putchar('0');
	}
	if (!counted)
		_putchar('0');
}

