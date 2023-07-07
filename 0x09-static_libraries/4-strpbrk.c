#include "main.h"
/**
 * _strpbrk - function that searches strings for bytes
 * @s: input
 * @accept: input
 * Return: will return char
 */
char *_strpbrk(char *s, char *accept)
{
		int n;

		while (*s)
		{
			for (n = 0; accept[n]; n++)
			{
			if (*s == accept[n])
			return (s);
			}
		s++;
		}

	return ('\0');
}

