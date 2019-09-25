#include "holberton.h"
#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0
*/
int main(void)
{
/*this function prints the sum multiples 3 and 5 below 1024.*/

	int i, j, suma;

	suma = 0;
	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		    suma = suma + i;
	}
	printf("%d\n", suma);
	return (0);
}
