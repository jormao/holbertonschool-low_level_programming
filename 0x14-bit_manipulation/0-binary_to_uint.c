#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - convert from binary to unsigned int
 * @b: binary
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, count = 0, mult = 1;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if ((b[i] - '0') != 0 && (b[i] - '0') != 1)
			return (0);
		count++;
		i++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			decimal += mult;
		mult = mult * 2;
	}
	return (decimal);
}
