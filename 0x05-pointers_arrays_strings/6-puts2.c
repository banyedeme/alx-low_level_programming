#include "main.h"
/**
 * puts2 - function to print every other char of string
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int mama = 0;
	int papa = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		mama++;
	}
	papa = mama - 1;
	for (o = 0 ; o <= papa ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}

