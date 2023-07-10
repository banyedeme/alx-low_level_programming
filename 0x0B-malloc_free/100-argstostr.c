#include "main.h"
#include <stdlib.h>
/**
 * argstostr -function that concatenates all the arguments of a program
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int m, n, t = 0, z = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
			z++;
	}
	z += ac;

	str = malloc(sizeof(char) * z + 1);
	if (str == NULL)
		return (NULL);
	for (m = 0; m < ac; m++)
	{
	for (n = 0; av[m][n]; n++)
	{
		str[t] = av[m][n];
		t++;
	}
	if (str[t] == '\0')
	{
		str[t++] = '\n';
	}
	}
	return (str);
}



