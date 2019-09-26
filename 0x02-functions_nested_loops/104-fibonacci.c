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
	uint64_t fi1 = 1, fi2 = 0, fi3, last_num;
	uint64_t P10_UINT64 = 10000000000000000000ULL;
	uint64_t a, b, c, d, e, f;

	a = 9740274219868223167ULL;
	b = 1940434634990099905ULL;
	c = 1680708854858323072ULL;
	d = 3621143489848422977ULL;
	e = 5301852344706746049ULL;
	f = 8922995834555169026ULL;


	for (j = 1; j <= 92; j++)
	{
		fi3 = fi1 + fi2;
		printf("%." PRIu64 ", ", fi3);
		fi2 = fi1;
		fi1 = fi3;
	}
	printf("%d", 1);
	printf("%" PRIu64 ", ", a);
	printf("%d", 3);
	printf("%" PRIu64 ", ", b);
	printf("%d", 5);
	printf("%" PRIu64 ", ", c);
	printf("%d", 8);
	printf("%" PRIu64 ", ", d);
	printf("%d", 13);
	printf("%" PRIu64 ", ", e);
	printf("%d", 21);
	printf("%" PRIu64 "\n", f);
	return (0);
}
