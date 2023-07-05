#include "main.h"
/**
 * _print_rev_recursion - Outputs string in reverse.
 * @s: This string is printed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
