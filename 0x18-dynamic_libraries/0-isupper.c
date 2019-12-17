#include "holberton.h"
/**
 * _isupper - hecks for uppercase character.
 *@c: value to check
 *
 * Return: 1 if c is uppercase 0 otherwise
 */

int _isupper(int c)
{
	int i, d;

	d = 0;
	/*print alphabet */
	for (i = 65; i <= 90; i++)
	{
		if (i == c)
		{
			d = 1;
			break;
		}
	}
	return (d);
}
