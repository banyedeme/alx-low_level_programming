#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - Prints out strings to screen, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The num of arguments passed to the function.
 * @...: The variadic args of strings to be printed.
 *
 * Description: If separator is NULL, do not print.
 *              Instead, If one of the strings if NULL, (nil) is printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *str_ptr;
	unsigned int a;

	va_start(strs, n);

	for (a = 0; a < n; a++)
	{
		str_ptr = va_arg(strs, char *);

		if (str_ptr == NULL)
			printf("(nil)");
		else
			printf("%s", str_ptr);

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strs);
}

