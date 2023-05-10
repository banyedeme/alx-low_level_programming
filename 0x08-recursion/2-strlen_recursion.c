#include "main.h"
/**
 * _strlen_recursion - Functions to return length of a string.
 * @s: string to return
 * Return: The length of string.
 */
int _strlen_recursion(char *s)
{
	int m = 0;

	if (*s)
	{
		m++;
	m += _strlen_recursion(s + 1);
	}

	return (m);
}

