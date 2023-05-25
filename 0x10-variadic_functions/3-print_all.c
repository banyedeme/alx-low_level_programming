#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - this function prints out anything
 * @format: list of diff types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int b = 0;
	char *strs, *sepe = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[b])
		{
			switch (format[b])
			{
				case 'c':
					printf("%s%c", sepe, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sepe, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sepe, va_arg(args, double));
					break;
				case 's':
					strs = va_arg(args, char *);
					if (!strs)
						strs = "(nil)";
					printf("%s%s", sepe, strs);
					break;
				default:
					b++;
					continue;
			}
			sepe = ", ";
			b++;
		}
	}

	printf("\n");
	va_end(args);
}

