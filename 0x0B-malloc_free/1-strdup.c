#include <stdlib.h>
#include "holberton.h"

/**
 * _strup - create an array of chars
 * @str: char
 *
 * Return: char
 */
char *_strdup(char *str)
{
	char *res;
	int i = 0, j;

	while (str[i])
	{
		i++;
	}
	if (str == NULL)
		return (NULL);
	res = malloc(i * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		res[j] = str[j];
	}
	return (res);
}
