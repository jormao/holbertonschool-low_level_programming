#include "holberton.h"
/**
 * print_number - prints an integer only with putchar
 *@n: number to print
 *
 * Return: 0 always
 */

void print_number(int n)
{
	int dm, um, c, d, u, cm;

	/*prints an integer only with putchar */

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	cm = n / 100000;
	dm = (n - (cm * 100000)) / 10000;
	um = (n - (cm * 100000) - (dm * 10000)) / 1000;
	c = (n - (cm * 100000) - (dm * 10000) - (um * 1000)) / 100;
	d = (n - (cm * 100000) - (dm * 10000) - (um * 1000) - (c * 100)) / 10;
	u = n % 10;

	if (cm > 0)
		_putchar('0' + cm);
	if (cm > 0 || dm > 0)
		_putchar('0' + dm);
	if (cm > 0 || dm > 0 || um > 0)
		_putchar('0' + um);
	if (cm > 0 || dm > 0 || um > 0 || c > 0)
		_putchar(c + '0');
	if (cm > 0 || dm > 0 || um > 0 || c > 0 || d > 0)
		_putchar(d + '0');
	_putchar(u + '0');
}
