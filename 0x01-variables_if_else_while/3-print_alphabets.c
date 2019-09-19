#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - I call the alphabet game
 *
 * Return: cero
 */
int main(void)
{
	char i;
	/*crea alfabeto y lo muestra solo con putchar*/
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
