#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @p: first value to compare
 *
 * Return: Char
 */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] >= 97 && p[i] <= 122)
			p[i] = p[i] - 32;
		i++;
	}
	return (p);
}
