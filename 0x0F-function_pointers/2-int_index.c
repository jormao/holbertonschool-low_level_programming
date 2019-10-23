#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that execute a function given an array
 * @array: first value
 * @size: function
 * @action: function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
