#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - function that reallocs a memory block
 * @ptr: value 1
 * @old_size: value 2
 * @new_size: value 3
 *
 * Return: pointer integer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *point;
	unsigned int i, lower = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 &&  ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
		lower = new_size;
	else
		lower = old_size;
	point = malloc(new_size);
	if (point == NULL)
		return (NULL);
	for (i = 0; i < lower; i++)
	{

		point[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (point);
}
