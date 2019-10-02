#include "holberton.h"
/**
 * _atoi - copies the string pointed to by src
 *@s
 *
 * Return: convert
 */
int _atoi(char *s)
{
	int result;

	while (s[i] != '\0')
	while (((*s) == '-') || ((*s) == '+'))
	{
		if (*s == '-')
			negat = negat * -1;
		s++;
	}
	while ((*s >= '0') && (*s <= '9'))
	{
		result = (result * 10) + ((*s) - '0');
		s++;
	}
	result = result * negat;
	return (result);
}
