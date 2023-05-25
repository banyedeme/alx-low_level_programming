#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the total sum of all its arguments passed.
 * @n: The number of argument list passed.
 * @...: ellipses to indicate variadic variables.
 *
 * Return: returns 0 if n == 0
 *         else - the sum of all variadic args.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int q, Total_sum = 0;

	va_start(args, n);

	for (q = 0; q < n; q++)
		Total_sum += va_arg(args, int);

	va_end(args);

	return (Total_sum);
}

