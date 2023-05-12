#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c:Ther char to print
 * Return: 1 to indicate success.
 * On error, returns -1 for error.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

