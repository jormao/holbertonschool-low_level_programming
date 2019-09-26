#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0
*/
int main(void)
{

	int j;
	uint64_t fi1 = 1, fi2 = 0, z;
	uint128_t fi3;

	for (j = 1; j < 98; j++)
	{
		fi3 = fi1 + fi2;
		z = fi3 % 10;
		printf("%." PRIu64 ", ", z);
		fi2 = fi1;
		fi1 = fi3;
	}
	fi3 = fi1 + fi2;
	printf("%." PRIu64 "\n", z);
	return (0);
}
