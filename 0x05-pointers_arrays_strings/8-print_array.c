#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 *@a: first value to check
 *@n: Second value to check
 *
 */
void print_array(int *a, int n)
{

	int i;

	for (i = 0; i < n;  i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
