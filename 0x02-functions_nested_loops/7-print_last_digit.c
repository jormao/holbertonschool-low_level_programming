#include "holberton.h"
/**
 * print_last_digit -   prints the last digit of a number.
 * @a: the character to be checked
 *
 * Return: value of the last digit
 */
int print_last_digit(int a)
{
/*this function print last digit of a number */
	int d;

	d = a % 10;
	if (d < 0)
		d = d * -1;
	_putchar('0' + d);
	return (d);
}
