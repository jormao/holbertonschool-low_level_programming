#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: index where found the number or -1 else not found
 **/

int binary_search(int *array, size_t size, int value)
{
	int inicio = 0, end = (int)size - 1, med, i;

	if (array == NULL)
		return (-1);

	while (inicio <= end)
	{
		printf("Searching in array: ");
		for (i = inicio; i < end; ++i)
		{
			printf("%d, ", i);
		}
		printf("%d\n", end);
		med = (inicio + end) / 2;
		if (array[med] == value)
			return (med);
		else if (array[med] < value)
			inicio = med + 1;
		else
			end = med - 1;
	}
	return (-1);
}
