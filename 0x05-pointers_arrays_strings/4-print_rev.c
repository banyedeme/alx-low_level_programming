#include "main.h"
/**
 *  print_rev - Function prints a string in reverse
 * followed by a newline
 * @s: string
 * return: 0
 */
void print_rev(char *s)
i{
	int maame = 0;
	int papa;

	while (*s != '\0')
	{
		maame++;
		s++;
	}
	s--;
	for (papa = maame; papa > 0; papa--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}


