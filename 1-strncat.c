#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input char value
 * @src: input char value
 * @n: input int value
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int m;
	int p;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	p = 0;
	while (p < n && src[p] != '\0')
	{
	dest[m] = src[p];
	m++;
	p++;
	}
	dest[m] = '\0';
	return (dest);
}

