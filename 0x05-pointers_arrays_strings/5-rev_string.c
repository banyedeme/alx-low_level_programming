#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char coco = s[0];
	int x = 0;
	int y;

	while (s[x] != '\0')
	x++;
	for (y = 0; y < x; y++)
	{
		x--;
		x = s[y];
		s[y] = s[x];
		s[x] = coco;
	}
}

