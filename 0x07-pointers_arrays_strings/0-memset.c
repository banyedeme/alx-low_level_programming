#include "main.h"
/**
 * _memset - function to fill memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	 int q = 0;

	for (; q < n; q++)
	{
		s[q] = b;
		n--;
	}
	return (s);
}
