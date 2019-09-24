#include "holberton.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: number to check
 *
*/
void print_times_table(int n)
{
/*this function prints the n times table, starting with 0.*/

	int k, j, c, d;
	int u, m;

	if (n >= 0 && n <= 15)
	{
		for (k = 0; k <= n; k++)
		{
			for (j = 0; j <= n; j++)
			{
				m = j * k;
				u = m % 10;
				c = (m / 100);
				d = ((m - u) / 10);
				if (m > 100)
					d = (m - c * 100) / 10;
				if (j != 0 && m < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (j != 0 && m > 9 && m < 100)
					_putchar(' ');
				if (m >= 100)
					_putchar(c + '0');
				if (m >= 10)
					_putchar(d + '0');
				_putchar(u + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
