#include "holberton.h"
/**
 * _puts_recursion - function that fills memory with a constant byte
 *@s: first value
 *
 */
void _puts_recursion(char *s)
{

	if (s[0] == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
}
