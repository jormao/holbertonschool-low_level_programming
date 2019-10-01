#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: First operand
 * @b: second operand
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
