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
	char *conct1;
	int i, j;

	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)
		s2 = "";
		i = j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	conct1 = malloc(sizeof(char) * (i + j + 1));

	if (conct1 == NULL)
		return (NULL);
	i = j = 0;

	while (s1[i] != '\0')
	{
		conct1[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		conct1[i] = s2[j];
		i++, j++;
	}
	conct1[i] = '\0';
	return (conct1);
}


