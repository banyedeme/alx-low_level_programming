#include <stdlib.h>
#include "main.h"

/**
 * *_memset - allocates constant byte to memory
 * @s: memory area
 * @b: character to copy
 * @n: num of times to copy b
 * Return: The pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc - create  memory area for an array
 * @nmemb: total num elemente
 * @size: each element size
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *z;

	if (nmemb == 0 || size == 0)
		return (NULL);

	z = malloc(size * nmemb);

	if (z == NULL)
		return (NULL);

	_memset(z, 0, nmemb * size);

	return (z);
}

