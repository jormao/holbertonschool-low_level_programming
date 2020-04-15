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
	int block, i = 0, j = 0, m = 0, n = 0, count = 0;

	if (array == NULL)
		return (-1);

	block = sqrt((int)(size));

	while (array[block] <= value && block < (int)(size))
	{
		printf("Value checked array[%d] = [%d]\n", array[i], i);
		m = i;
		i = block;
		n = block;
		block += sqrt((int)(size));
		count += 1;
	}
	if (i == value && i != 0)
	{
		i = m;
		block = n;
	}
	if (count == 0)
		printf("Value checked array[%d] = [%d]\n", array[i], i);
	if (block > (int)(size))
		printf("Value checked array[%d] = [%d]\n", array[i], i);
	printf("Value found between indexes [%d] and [%d]\n", i, block);
	for (j = i; j <= block; ++j)
	{
		printf("Value checked array[%d] = [%d]\n", j, j);
		if (array[j] == value)
			return (j);
		if (block > (int)size)
			return (-1);
	}
	return (-1);
}
