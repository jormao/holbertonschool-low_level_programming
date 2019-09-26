#include "holberton.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: always 0
 */

void print_numbers(void)
{
	int i;

	/*print 0-9 using only _putchar */
	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
