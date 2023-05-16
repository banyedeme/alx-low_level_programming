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

	char *num1;

	int a, b;



	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";



		a = b = 0;

	while (s1[a] != '\0')

		a++;

	while (s2[b] != '\0')

		b++;

	num1 = malloc(sizeof(char) * (a + b + 1));



	if (num1 == NULL)

		return (NULL);

	a = b = 0;

	while (s1[a] != '\0')

	{

		mum1[a] = s1[a];

		a++;

	}



	while (s2[b] != '\0')

	{

		num1[a] = s2[b];

		a++, b++;

	}

	num1[a] = '\0';

	return (num1);

}

