#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase without e, q
 *
 * Return: cero
 */
int main(void)
{
	char i;
	/*crea alfabeto sin e y q,lo muestra solo con putchar*/
	for (i = 'a'; i <= 'z'; i++)
	{
		if ((i != 'e') && (i != 'q'))
		putchar(i);
	}
	putchar('\n');
	return (0);
}
