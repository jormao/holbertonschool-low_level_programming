#include "holberton.h"
/**
 * _abs -  prints the sign of a number.
 * @a: the character to be checked
 *
 * Return: 1, 0, -1
 */
int _abs(int a)
{
/*this function evaluate the sign of a number */
	int d;

	if (a < 0)
		d = (a * -1);
	else
		d = a;
	return (d);
}
