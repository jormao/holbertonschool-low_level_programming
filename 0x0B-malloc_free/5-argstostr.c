#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - function concatenates all the arguments of your program.
 * @ac: pointer
 * @av: altura
 *
 * REturn: result
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, cont;
	char *result, *new;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		new = av[i];
		while (*new)
		{
			cont++;
			new++;
		}
		cont++;
		i++;
	}
	result = malloc (cont + 1);
	for (i = 0; i < ac; i++)
	{
		new = av[i];
		for (j = 0; *new != '\0'; j++)
		{
			result[j] = *new;
			new++;
		}
		result[j] = '\n';
		j++;
	}
	result[cont + 1] = '\0';
	return (result);
}
