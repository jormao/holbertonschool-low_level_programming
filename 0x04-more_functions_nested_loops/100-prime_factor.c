#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
/**
 * main - finds and prints the largest prime factor
 *
 * Return: 0 always
 */

int main(void)
{
	long a, c, b, i;

	i = 2;
	/*finds and prints the largest prime factor */
	a = 612852475143;
	c = 1;
	while (i <= a)
	{
		if (a % i == 0)
		{
			b = i;
			if (b > c)
				c = b;
			a = a / i;
			i = 1;
		}
		i++;
	}
	printf("%ld\n", c);
	return (0);
}
