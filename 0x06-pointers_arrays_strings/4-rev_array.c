#include "holberton.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: first value to compare
 *@n: second value to compare
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, m;
	int *b;

	b = a;
	for (i = 1; i < n; i++)
	{
		b++;
	}
	for (j = 0; j < (n / 2); j++)
	{
		m = a[j];
		a[j] = *b;
		*b = m;
		b--;
	}
}
