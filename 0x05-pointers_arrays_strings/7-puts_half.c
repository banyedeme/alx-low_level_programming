#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, b = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, b, c;

	c = 0;

	for (a = 0; str[a] != '\0'; a++)
		c++;

	b = (c / 2);

	if ((c % 2) == 1)
		b = ((c + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

