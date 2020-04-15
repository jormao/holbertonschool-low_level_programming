#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algoritms
 *
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: index where found the number or -1 else not found
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; ++i)
		{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (value == array[i])
			return ((int)(i));
		}
	return (-1);
}
