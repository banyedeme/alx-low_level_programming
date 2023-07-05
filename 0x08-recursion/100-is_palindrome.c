#include "main.h"
int check_pal(char *s, int x, int y);
int _strlen_recursion(char *s);

/**
 * is_palindrome - examines if  string is palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - examines  characters recursively for palindrome
 * @s: string to check
 * @x: iterator
 * @y:  string length
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int x, int y)
{
	if (*(s + x) != *(s + y - 1))
		return (0);
	if (x >= y)
		return (1);
	return (check_pal(s, x + 1, y - 1));
}
