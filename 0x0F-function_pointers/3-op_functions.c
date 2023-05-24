#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - to return summation of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The summation of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - To return the differential of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - to Return the multiplication of 2 integers.
 * @a: The 1st integer.
 * @b: The 2nd integer.
 *
 * Return: The multiplication of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns 2 integers divisible.
 * @a: The 1st num1.
 * @b: The 2nd num2.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - to Return the remainder of the division of 2 numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The modulus of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

