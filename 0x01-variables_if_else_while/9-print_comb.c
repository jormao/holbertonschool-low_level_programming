#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 * main - possible combinations of single-digit numbers
 *
 * Return: cero
 */
int main(void)
{
	int i;
	int a = 44;
	int b = 32;
	/*solo se puede usar putchar*/
	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(a);
			putchar(b);
		}
	}
	putchar('\n');
	return (0);
}
