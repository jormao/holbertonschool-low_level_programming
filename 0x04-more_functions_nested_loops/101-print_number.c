#include "holberton.h"
/**
 * print_number - prints an integer only with putchar
 *@n: number to print
 *
 * Return: 0 always
 */

void print_number(int n)
{

	/*prints an integer only with putchar */

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n%10 + '0');
}
