#include <stdio.h>
/**
* main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
* separated by a comma followed by a space
* Return: Always 0.
 */
int main(void)
	{
		int n;
		unsigned long num1 = 0, num2 = 1, sum;


		for (n  = 0; n < 50; n++)
		{
			sum = num1 + num2;
			printf("%lu", sum);


			num1 = num2;
			num2 = sum;

			if (n == 49)
				printf("\n");
			else
				printf(", ");
		}


		return (0);
	}


