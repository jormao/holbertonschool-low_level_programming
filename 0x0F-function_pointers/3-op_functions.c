#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - function that return sum a + b
 * @a: first value
 * @b: second value
 *
 * Return: suma a+ b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that return sub a - b
 * @a: first value
 * @b: second value
 *
 * Return: sub a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that return mul a * b
 * @a: first value
 * @b: second value
 *
 * Return: mul a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - function that return div a / b
 * @a: first value
 * @b: second value
 *
 * Return: div a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that return mod a % b
 * @a: first value
 * @b: second value
 *
 * Return: mod a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
