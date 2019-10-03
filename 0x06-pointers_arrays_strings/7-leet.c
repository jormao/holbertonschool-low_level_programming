#include "holberton.h"
/**
 * leet - encodes a string into 1337.
 * @p: first value to compare
 *
 * Return: Char
 */
char *leet(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] == 65 || p[i] == 97)
			p[i] = 52;
		if (p[i] == 69 || p[i] == 101)
			p[i] = 51;
		if (p[i] == 79 || p[i] == 111)
			p[i] = 48;
		if (p[i] == 84 || p[i] == 116)
			p[i] = 55;
		if (p[i] == 76 || p[i] == 108)
			p[i] = 49;
		i++;
	}
	return (p);
}
