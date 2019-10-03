#include "holberton.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: value dest to concatenar
 *@src: second value to concatenar
 *
 * Return: char concatenado
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k;

	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0)
	{
		j++;
	}
	for (k = 0; k < j; k++)
	{
		dest[i] = src[k];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
