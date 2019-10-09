#include "holberton.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 *@s: first value
 *
 */
void _print_rev_recursion(char *s)
{

	if (s[0] =='\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
}
