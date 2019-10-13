#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int i, suma = 0, res = 0;
	char c[] = "Error";

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			res = atoi(argv[i]);
			if (res == 0 && *argv[i] != '0')
			{
				printf("%s\n", c);
				return (1);
			}
			if (res > 0)
				suma += res;
		}
		printf("%d\n", suma);
	}
	else
		printf("%d\n", 0);
	return (0);
}
