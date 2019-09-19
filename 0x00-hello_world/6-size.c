#include <stdio.h>
/**
 * main - prints the size of various types
 *
 * Return: cero
 */
int main(void)
{
	char chartype;
	int inttype;
	long int longinttype;
	long long int l_l_inttype;
	float floattype;
	/*size of es utilizado para conocer el tamaño de la variable*/
	printf("Size of a char: %d byte(s)\n", sizeof(chartype));
	printf("Size of an int: %d byte(s)\n", sizeof(inttype));
	printf("Size of a long int: %d byte(s)\n", sizeof(longinttype));
	printf("Size of a long long int: %d byte(s)\n", sizeof(l_l_inttype));
	printf("Size of a float: %d byte(s)\n", sizeof(floattype));
	return (0);
}
