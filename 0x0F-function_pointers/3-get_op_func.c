#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - The function to Select the correct function to perform
 *               the operation requested by the user.
 * @s: The operator passed as argument.
 *
 * Return: A function pointer to correspond
 *         to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int b = 0;

	while (ops[b].op != NULL && *(ops[b].op) != *s)
		b++;

	return (ops[b].f);
}

