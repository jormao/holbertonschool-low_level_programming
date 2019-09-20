#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the numbers from 00 to 99
 *
 * Return: cero
 */
int main(void)
{
	int i;
	int j;
	int a = 44;
	int b = 32;
	/*solo se puede usar 5 putchar*/
	for (j = 48; j <= 57; j++)
	{
		for (i = 48; i <= 57; i++)
		{
			putchar(j);
			putchar(i);
			if (!((j == 57) && (i == 57)))
			{
				putchar(a);
				putchar(b);
			}
		}
	}
	putchar('\n');
	return (0);
}
