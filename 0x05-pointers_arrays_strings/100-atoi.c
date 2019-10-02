#include "holberton.h"
/**
 * _atoi - copies the string pointed to by src
 *@s: first value to check
 *
 * Return: result
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int i = 0, j = 0, a = 0, negat = 1;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (s[j] == '-')
			negat = negat * -1;
		while ((s[j] >= '0') && (s[j] <= '9'))
		{
			result = (result * 10) + (s[j] - '0');
			j++;
			a = 1;
		}
		if (a == 1)
			j = i;
	}
	result = result * negat;
	return (result);
}
