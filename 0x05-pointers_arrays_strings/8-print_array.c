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

	int i, j = n - 1;

	for (i = 0; i <= (n - 2);  i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[j]);
}
