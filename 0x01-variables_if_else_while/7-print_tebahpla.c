#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: cero
 */
int main(void)
{
	char i;
	/*solo se puede usar putchar*/
	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
