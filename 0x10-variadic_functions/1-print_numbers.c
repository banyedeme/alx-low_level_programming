#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints out integers, followed by a new line.
 * @separator: The string to be printed btn the integers.
 * @n: The number of arguments passed to the function.
 * @...:  the variadic numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int p;

	va_start(args, n);

	for (p = 0; p < n; p++)
	{
		printf("%d", va_arg(args, int));

		if (p != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}

