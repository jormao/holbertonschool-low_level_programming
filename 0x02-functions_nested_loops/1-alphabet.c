#include "holberton.h"
/**
 * print_alphabet - print alphabet in lowercase with _putchar
 */
void print_alphabet(void)
{
	int i;
	/*print alphabet */
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
