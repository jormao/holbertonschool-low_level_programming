#include "holberton.h"
/**
 * puts_half - function that  prints half of a string,
 *@str: first value to check
 *
 */
void puts_half(char *str)
{

	int i = 0, k, j;

	while (str[i] != 0)
	{
		i++;
	}
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i - 1) / 2;
	for (k = j; k < i;  k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
