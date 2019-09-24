#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int i, j;
/*this function print the alphabet 10 times */
	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
