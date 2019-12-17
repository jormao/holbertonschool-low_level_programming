#include "holberton.h"
/**
 * _strncpy - function that concatenates two strings from n
 * @dest: value dest to concatenar
 *@src: second value to concatenar
 *@n: number of char to copy
 *
 * Return: char concatenado
 */
char *_strncpy(char *dest, char *src, int n)
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
	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	for (; k < n; k++)
		dest[k] = '\0';
	return (dest);
}
