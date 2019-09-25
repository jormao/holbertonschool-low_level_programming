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
/*this function prints prints the first 98 Fibonacci numbers.*/

	int j;
	uint64_t fi1, fi2, fi3;

	fi1 = 1;
	fi2 = 0;
	for (j = 1; j < 98; j++)
	{
		fi3 = fi1 + fi2;
		printf("%" PRIu64 "\n", fi3);
		fi2 = fi1;
		fi1 = fi3;
	}
	fi3 = fi1 + fi2;
	printf("%" PRIu64 "\n", fi3);
	return (0);
}
