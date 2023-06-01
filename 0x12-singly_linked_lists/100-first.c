#include <stdio.h>

void isprint(void) __attribute__ ((constructor));

/**
 * isprint - prints a phrases before the main
 * function is executed
 */
void isprint(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

