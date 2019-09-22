#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: cero
 */
int main(void)
{
	int i = 48, j, k = 48, f = 48, d = 48, l = 49, a = 44, b = 32, c = 49;
	/* solo se puede usar 6 putchar*/
	for (j = 48; j <= 57; j++)
	{
		for (; i <= 57; i++)
		{
			for (; k <= 57; k++)
			{
				for (; l <= 57; l++)
				{
					putchar(j);
					putchar(i);
					putchar(b);
					putchar(k);
					putchar(l);
					if ((j == 57) && (i == 56) && (k == 57) && (l == 57))
						break;
					putchar(a);
					putchar(b);
				}
				l = f;
			}
			if (i == 56)
			{
				d++;
				l = c = 48;
				k = d;
			}
			else
			{
				c++;
				l = c;
				k = d;
			}
		}
		i = f;
	}
	putchar('\n');
	return (0);
}
