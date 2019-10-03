#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string.
 * @p: first value to compare
 *
 * Return: Char
 */
char *cap_string(char *p)
{
	int i = 0;

	if (p[0] >= 97 && p[0] <= 122)
		p[0] -= 32;
	while (p[i] != '\0')
	{
		if (p[i] == ' ' || p[i] == '\t' || p[i] == '\n' || p[i] == ','
		    || p[i] == ';' || p[i] == '.' || p[i] == '!' || p[i] == '?'
		    || p[i] == '"' || p[i] == '(' || p[i] == ')' || p[i] == '{'
		    || p[i] == '}')
		{
			if (p[i + 1] >= 97 && p[i + 1] <= 122)
			{
				p[i + 1] -= 32;
			}
		}
		i++;
	}
	return (p);
}
