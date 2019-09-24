#include "holberton.h"
/**
 * times_table -  prints the 9 times table, starting with 0..
 */
void times_table(void)
{
/*this function  prints the 9 times table, starting with 0. */
	int k, j, c, d;
	int a;

	for (k = 0; k <= 9; k++)
	{
		for (j = 0; j <= 9; j++)
		{
			c = j * k;
			d = c % 10;
			a = ((c - d) / 10);
			if (j != 0 && c < 10)
				_putchar(' ');
			if (c >= 10)
				_putchar(a + '0');
			_putchar(d + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
