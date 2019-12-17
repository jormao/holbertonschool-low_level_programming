#include "holberton.h"
/**
 * _strcmp - function that that compares two strings
 * @s1: first value to compare
 *@s2: second value to compare
 *
 * Return: char comparate
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k, m = 0;

	while (s1[i] != 0)
	{
		i++;
	}
	while (s2[j] != 0)
	{
		j++;
	}
	for (k = 0; k <= i && k <= j; k++)
	{
		if (s1[k] != s2[k])
		{
			m = (s1[k] - '0') - (s2[k] - '0');
			break;
		}
	}
	return (m);
}
