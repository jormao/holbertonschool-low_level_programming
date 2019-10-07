#include "holberton.h"
/**
 * _strchr - function that locates a character in a string
 *@s: first value -char
 *@c: second value - char
 *
 * Return: char with result
 */
char *_strchr(char *s, char c)
{
	char *p;

	p = s;
	while (*p)
	{
		if (*p == c)
		{
			return (p);
		}
		p++;
	}
	return ('\0');
}
