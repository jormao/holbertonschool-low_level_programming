#include <stdio.h>
/**
 * prints the size of various types
 *
 * Return: cero
 */
int main(void)
{
	printf("Size of a char: %d", sizeof(char));
	printf("Size of an int: %d", sizeof(int));
	printf("Size of a long int: %d", sizeof(long int));
	printf("Size of a long long int: %n", sizeof(long long int));
	printf("Size of a float: %d", sizeof(float));
	return (0);
}
