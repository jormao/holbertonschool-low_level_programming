#include "holberton.h"
/**
 * more_numbers - prints the numbers from 0 to 14 10 times
 *
 * Return: any
 */

void more_numbers(void)
{
	int i, j, k;

	/*print 0-14 10 times whith 3 putchar */
	j = 0;
	for (k = 0; k < 10; k++)
	{
		for (i = 48; i <= 57; i++)
		{
			if (j >= 15)
				break;
			if (j >= 10)
				_putchar('1');
			_putchar(i);
			j++;
			if (i == 57)
				i = 48;
		}
		i = 48;
		j = 0;
		_putchar('\n');
	}
}
