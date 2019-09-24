#include "holberton.h"
/**
 * print_sign -  prints the sign of a number.
 * @n: the character to be checked
 *
 * Return: 1 if is greater than 0, 0 if 0 and -1 ig less than 0
 */
int print_sign(int n)
{
/*this function evaluate the sign of a number */
	int d;

	if (n > 0)
	{
		_putchar('+');
		d = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		d = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		d = -1;
	}
	return (d);
}
