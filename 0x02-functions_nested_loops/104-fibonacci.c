#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#define P10_UINT64 10000000000000000000ULL   /* 19 zeroes */
/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0
*/
int main(void)
{

	int j, first_num;
	__int128 fi1 = 1, fi2 = 0, fi3;
	uint64_t last_num;

	for (j = 1; j < 98; j++)
	{
		fi3 = fi1 + fi2;
		if (fi3 > UINT64_MAX)
		{
			first_num  = fi3 / P10_UINT64;
			last_num  = fi3 % P10_UINT64;
			printf("%d", first_num);
			printf("%." PRIu64 "\n", last_num);
		}
		else
		{
			last_num = fi3;
			printf("%" PRIu64 "\n", last_num);
		}
		fi2 = fi1;
		fi1 = fi3;
	}
	fi3 = fi1 + fi2;
	first_num  = fi3 / P10_UINT64;
	last_num = fi3 % P10_UINT64;
	printf("%d", first_num);
	printf("%." PRIu64 "\n", last_num);
	return (0);
}
