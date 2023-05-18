#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - joining n bytes of a string to another string
 * @s1: str to append to
 * @s2: str to concatenate from
 * @n: num of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the concartuated  string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *oga;
	unsigned int q = 0, r = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		oga = malloc(sizeof(char) * (l1 + n + 1));
	else
		oga = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!oga)
		return (NULL);

	while (q < l1)
	{
		oga[q] = s1[q];
		q++;
	}

	while (n < l2 && q < (l1 + n))
		oga[q++] = s2[r++];

	while (n >= l2 && q < (l1 + l2))
		oga[q++] = s2[r++];

	oga[q] = '\0';

	return (oga);
}

