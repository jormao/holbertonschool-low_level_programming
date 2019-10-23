#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - calculator
 * @argc: value with lenght
 * @argv: elements
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int (*function)(int, int);
	int num_1 = 0, num_2 = 0, result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	function = get_op_func(argv[2]);
	if (function == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);
	result = function(num_1, num_2);
	printf("%i\n", result);
	return (0);
}
