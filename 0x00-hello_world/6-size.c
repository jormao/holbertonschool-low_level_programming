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
	printf("Size of a char: %d", sizeof(chartype));
	printf("Size of an int: %d", sizeof(inttype));
	printf("Size of a long int: %d", sizeof(longinttype));
	printf("Size of a long long int: %n", sizeof(l_l_inttype));
	printf("Size of a float: %d\n", sizeof(floattype));
	return (0);
}
