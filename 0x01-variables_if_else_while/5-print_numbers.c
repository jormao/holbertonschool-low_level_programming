#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 start in 0
 *
 * Return: cero
 */
int main(void)
{
	int i;
	/*crea del 0 al 9 y lo muestra solo con putchar*/
	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
