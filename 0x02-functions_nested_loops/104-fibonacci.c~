#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0
*/
int main(void)
{
/*this function prints prints the first 50 Fibonacci numbers.*/

	int j;
	long int fi1, fi2, fi3;

	fi1 = 1;
	fi2 = 0;
	for (j = 1; j < 50; j++)
	{
		fi3 = fi1 + fi2;
		printf("%ld, ", fi3);
		fi2 = fi1;
		fi1 = fi3;
	}
	fi3 = fi1 + fi2;
	printf("%ld\n", fi3);
	return (0);
}
