#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len11, len22, lens, i, carry1, digit11, digit22, *result1, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len11 = _strlen(s1);
	len22 = _strlen(s2);
	lens = len11 + len22 + 1;
	result1 = malloc(sizeof(int) * lens);
	if (!result1)
		return (1);
	for (i = 0; i <= len11 + len22; i++)
		result1[i] = 0;
	for (len11 = len11 - 1; len11 >= 0; len11--)
	{
		digit11 = s1[len11] - '0';
		carry1 = 0;
		for (len22 = _strlen(s2) - 1; len22 >= 0; len22--)
		{
			digit22 = s2[len22] - '0';
			carry1 += result1[len11 + len22 + 1] + (digit11 * digit22);
			result1[len11 + len22 + 1] = carry1 % 10;
			carry1 /= 10;
		}
		if (carry1 > 0)
			result1[len11 + len22 + 1] += carry1;
	}
	for (i = 0; i < lens - 1; i++)
	{
		if (result1[i])
			a = 1;
		if (a)
			_putchar(result1[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result1);
	return (0);
}

