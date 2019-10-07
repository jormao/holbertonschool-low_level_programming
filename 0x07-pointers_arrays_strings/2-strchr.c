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

	for (p = s; *p != '\0'; p++)
	{
		if (*p == c)
		{
			return (p);
		}
	}
	return ('\0');
}
