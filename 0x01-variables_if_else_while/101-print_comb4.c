#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: cero
 */
int main(void)
{
	int i = 49;
	int j = 48;
	int k = 50;
	int a = 44;
	int b = 32;
	int c = 49;
	int d = 50;
	int e = 50;
	/*solo se puede usar 6 putchar*/
	for (; j <= 55; j++)
	{
		for (; i <= 56; i++)
		{
			for (; k <= 57; k++)
			{
				putchar(j);
				putchar(i);
				putchar(k);
				if (((j == 55) && (i == 56)) && (k == 57))
					break;
				putchar(a);
				putchar(b);
			}
			d++;
			k = d;
		}
		e++;
		k = e;
		d = e;
		c++;
		i = c;
	}
	putchar('\n');
	return (0);
}
