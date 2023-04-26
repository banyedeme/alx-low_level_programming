#include "main.h"
/**
 * print_alphanet_x10 - print 10x the alphabet in lowercase
 * Followed by new line
 * The function returns nothing
 * @void:Takes no arguments
 */
void print_alphabet_x10(void)
{
		char j;
		int i;


		i = 0;


		while (i < 10)
		{
			j = 'a';
			while (j <= 'z')
			{
				_putchar(j);
				j++;
			}
			_putchar('\n');
			i++;
		}
}

