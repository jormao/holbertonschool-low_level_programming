#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: index where found the number or -1 else not found
 **/

int jump_search(int *array, size_t size, int value)
{
	int block, i = 0, j = 0;

	if (array == NULL)
		return (-1);

	block = sqrt((int)(size));

	while (i < (int)size)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += block;
	}
	j = i - block;
	printf("Value found between indexes [%d] and [%d]\n", j, i);
	if (i >= (int)size)
		i = (int)size - 1;
	while (j <= i)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}
	return (-1);
}
