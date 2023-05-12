#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int m = 0;

	for (; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
			return (&s[m]);
	}
	return (0);
}

