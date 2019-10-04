#include "holberton.h"
/**
 * rot13 - encodes a string using rot13.
 * @p: first value to compare
 *
 * Return: Char
 */
char *rot13(char *p)
{
	int i = 0, j = 0;
	char a[] = {'A', 'N', 'A', 'B', 'O', 'B', 'C', 'P', 'C', 'D', 'Q', 'D',
		    'E', 'R', 'E', 'F', 'S', 'F', 'G', 'T', 'G', 'H', 'U', 'H',
		    'I', 'V', 'I', 'J', 'W', 'J', 'K', 'X', 'K', 'L', 'Y', 'L',
		    'M', 'Z', 'M', 'a', 'n', 'a', 'b', 'o', 'b', 'c', 'p', 'c',
		    'd', 'q', 'd', 'e', 'r', 'e', 'f', 's', 'f', 'g', 't', 'g',
		    'h', 'u', 'h', 'i', 'v', 'i', 'j', 'w', 'j', 'k', 'x', 'k',
		    'l', 'y', 'l', 'm', 'z', 'm', '\0'};


	while (p[i] != '\0')
	{
		while (((p[i] >= 65 && p[i] <= 90) ||
			(p[i] >= 97 && p[i] <= 122)) &&
		       (j < 78))
		{
			if ((p[i] == a[j]) && (a[j] != a[j - 2]))
			{
				p[i] = a[j + 1];
				j = 77;
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (p);
}
