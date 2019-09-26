#include <stdio.h>
#include "holberton.h"
/**
 * main - prints the numbers from 1 to 100 with fizz for
 *multiples de 3, Buzz for multiples of 5, FizzBuzz for both
 *
 * Return: 0 always
 */

int main(void)
{
	int i;

	/*prints 1-100 multiples 3 and 5 */

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf("FizzBuzz");
			else
				printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			if (i % 3 == 0)
			{
			}
			else
				printf("Buzz");
		}
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
