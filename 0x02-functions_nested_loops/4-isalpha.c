#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: the character to be checked
 *
 * Return: 1 if is alphabet or 0 otherwise
 */
int _isalpha(int c)
{
/*this function is to know if is alphabet or otherwise */
	int d;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		d = 1;
	else
		d = 0;
	return (d);
}
