#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 * main - rints all the numbers of base 16 in lowercase
 *
 * Return: cero
 */
int main(void)
{
	int i;
	/*solo se puede usar putchar*/
	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
