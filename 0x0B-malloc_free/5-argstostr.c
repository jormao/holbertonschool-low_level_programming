#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - function that frees a 2 dimensional grid previously created
 * @ac: pointer
 * @av: altura
 *
 */

char *argstostr(int ac, char **av)
{
	int cont;

	for (cont = 0; cont < height; cont++)
	{
		free(grid[cont]);
	}
	free(grid);
}
