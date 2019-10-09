#include "holberton.h"

/**
 * _srelen_recursion - function that prints a string in reverse
 *@s: first value
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return(_strlen_recursion(s) + 1);
}
