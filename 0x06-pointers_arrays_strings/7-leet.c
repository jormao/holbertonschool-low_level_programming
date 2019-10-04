#include "holberton.h"
/**
 * leet - encodes a string into 1337.
 * @p: first value to compare
 *
 * Return: Char
 */
char *leet(char *p)
{
	int i = 0, j;
	char a[] = {"a4A4e3E3o0O0l1L1t7T7"};

	while (p[i] != '\0')
	{
		for (j = 0; j <= 19; j++)
		{
			if (((p[i] >= 65 && p[i] <= 90) ||
			    (p[i] >= 97 && p[i] <= 122)) &&
			    (p[i] == a[j]))
				p[i] = a[j + 1];
		}
		i++;
	}
	return (p);
}
