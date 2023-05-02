#include "main.h"
/**
  * _strlen - function that returns length of string
  * @s:  string
  * Return: length of string
  */
int _strlen(char *s)
{
	int lengs = 0;

	while (*s != '\0')
	{
		lengs++;
		s++;
	}

	return (lengs);
}

