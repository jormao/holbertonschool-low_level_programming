#include <studio.h>
/**
 * main - prints the n times table, starting with 0.
 *
 * Return: 0
*/
void main(void)
{
/*this function prints the n times table, starting with 0.*/

	int i, j, suma;

	suma = 0;
	for (i = 1; i < 1024; i++)
	{
		if ((3 * i) < 1024)
			suma = suma + (3 * i);
		if ((5 * i) < 1024 && ((5 * i) % 3 != 0))
			suma = suma + (5 * i);
	}
	printf("%d\n", suma);
	return (0);
}
