#include "holberton.h"
/**
 * print_number - prints an integer only with putchar
 *@n: number to print
 *
 * Return: 0 always
 */

void print_number(int n)
{
	int dm, um, c, d, u, cm, UM;

	/*prints an integer only with putchar */

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	UM = n / 1000000;
	cm = (n - (UM * 1000000)) / 100000;
	dm = (n - (UM * 1000000) - (cm * 100000)) / 10000;
	um = (n - (UM * 1000000) - (cm * 100000) - (dm * 10000)) / 1000;
	c = (n - (UM * 1000000) - (cm * 100000) - (dm * 10000) - (um * 1000)) / 100;
	d = (n - (UM * 1000000) - (cm * 100000) - (dm * 10000) - (um * 1000) - (c * 100)) / 10;
	u = n % 10;

	if (UM > 0)
		_putchar('0' + UM);
	if (UM > 0 || cm > 0)
		_putchar('0' + cm);
	if (UM > 0 || cm > 0 || dm > 0)
		_putchar('0' + dm);
	if (UM > 0 || cm > 0 || dm > 0 || um > 0)
		_putchar('0' + um);
	if (UM > 0 || cm > 0 || dm > 0 || um > 0 || c > 0)
		_putchar(c + '0');
	if (UM > 0 || cm > 0 || dm > 0 || um > 0 || c > 0 || d > 0)
		_putchar(d + '0');
	_putchar(u + '0');
}
