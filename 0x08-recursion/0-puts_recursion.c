#include "main.h"
/**
 * _puts_recursion - acts like puts();
 * @s: input
 * Return: 0 to indicate success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}

