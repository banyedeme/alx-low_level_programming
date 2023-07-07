#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * inspect_num - checking for string there are digit
 * @str: array str
 * Return: returns 0 to indicate success
 */
int inspect_num(char *str)
{

	unsigned int m;

	m = 0;
	while (m < strlen(str))

	{
		if (!isdigit(str[m]))
		{
			return (0);
		}

		m++;
	}
	return (1);
}

/**
 * main - outputs name of the program
 * @argc: Count args
 * @argv: Args
 *
 * Return: 0 to indicate success
 */

int main(int argc, char *argv[])

{


	int m;
	int string_to_int;
	int total = 0;

	m = 1;
	while (m < argc)
	{
		if (inspect_num(argv[m]))

		{
			string_to_int = atoi(argv[m]);
			total += string_to_int;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		m++;
	}

	printf("%d\n", total); /*printing the total*/

	return (0);
}


