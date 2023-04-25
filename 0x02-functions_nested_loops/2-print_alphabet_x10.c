#include "main.h"
/* print_alphanet_x10 in lowercase - printing x10 alphabet in lowercase */
/* the function is declared void and it returns 0 */
/*  Followed by newline */
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

