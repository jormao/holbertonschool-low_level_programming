#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - function that prints a string in reverse
 *@s: first value to check
 *
 */
void rev_string(char *s)
{

	int i = 0, j, k;
	char *a;
	char c;

	a = s;

	while (s[i] != 0)
	{
		i++;
	}
	for (k = 1; k < i; k++)
	{
		a++;
	}
	for (j = 0; j < (i / 2); j++)
	{
		c = s[j];
		s[j] = *a;
		*a = c;
		a--;
	}
}
