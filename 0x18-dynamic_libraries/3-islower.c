#include "holberton.h"
/**
 * _islower - print alphabet in lowercase 10 times
 * @c: the character to be checked
 *
 * Return: zero if uppercase and 1 if uppercase
 */
int _islower(int c)
{
/*this function is to know if is uppercase or lowercase */
	int d;

	if (c >= 97 && c <= 122)
		d = 1;
	else if (c >= 65 && c <= 90)
		d = 0;
	return (d);
}
