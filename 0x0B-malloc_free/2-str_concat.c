#include "main.h"
#include <stdlib.h>
/**
 * str_concat - joining two inputs  together
 * @s1: input 1
 * @s2: input 2
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
		char *p3;
	unsigned int m = 0, n = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	p3 = malloc(sizeof(char) * (l1 + l2 + 1));
	if (p3 == NULL)
		return (NULL);

	m = 0;
	n = 0;

	if (s1)
	{
		while (m < l1)
		{
			p3[m] = s1[m];
			m++;
		}
	}

	if (s2)
	{
		while (m < (l1 + l2))
		{
			p3[m] = s2[n];
			m++;
			n++;
		}
	}
	p3[m] = '\0';

	return (p3);
}

