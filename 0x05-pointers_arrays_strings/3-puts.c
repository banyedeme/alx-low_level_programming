#include "main.h"
/**
  * _puts - Function that prints string
  * followed by a newline to stdout
  * @str: string
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

