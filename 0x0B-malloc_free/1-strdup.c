#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - makes a copy of a sting given as parameter
 * @str: character
 * Return: Null when NULL = stir
 */

char *_strdup(char *str)
{

	char *paa;

	int x, y = 0;


	if (str == NULL)

		return (NULL);

	x = 0;

	while (str[x] != '\0')

		x++;

	paa = malloc(sizeof(char) * (x + 1));



	if (paa == NULL)

		return (NULL);


	for (y = 0; str[y]; y++)

		paa[y] = str[y];



	return (paa);

}

