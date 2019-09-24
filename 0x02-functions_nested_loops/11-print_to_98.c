#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to check
 *
*/
void print_to_98(int n)
{
/*this function prints all natural numbers from n to 98  */

	if (n == 98)
		printf("%d\n", n);
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98\n");
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98\n");
	}
}
