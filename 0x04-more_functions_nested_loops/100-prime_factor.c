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
	uint64_t a, c, d, e, i;

	/*finds and prints the largest prime factor */
	a = 612852475143;
	while (c != 0)
	{
		for (i = 2; i <= a; i++)
		{
			c = a % i;
			d = i;
			if (c == 0)
				break;
		}
	}
	e = a / d;
	if (d > e)
		printf("%" PRIu64 "\n", d);
	else
		printf("%"PRIu64 "\n", e);

	return (0);
}
