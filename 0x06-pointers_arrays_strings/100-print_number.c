#include "holberton.h"
/**
 * print_number - prints an integer only with putchar
 *@n: number to print
 *
 * Return: 0 always
 */


void print_number(int n)
{
	unsigned int t;
	/*prints an integer only with putchar */

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	t = n;
	if (t / 10)
		print_number(t / 10);
	_putchar(t % 10 + '0');
}
