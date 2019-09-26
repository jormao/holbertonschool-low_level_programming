#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal
 *@n: n times to print _
 *
 */

void print_line(int n)
{
	int i;

	/*draws a straight line in the terminal n times */

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
