#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * Function takes integer and returns integer
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

