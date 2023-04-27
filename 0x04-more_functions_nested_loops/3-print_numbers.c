#include "main.h"
/**
 * print_numbers - print numbers from  0-9
 * return: returns nothing
 */

void print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}

