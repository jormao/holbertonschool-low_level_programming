#include "holberton.h"
int _strlen_recursion(char *len);
int palindrome(char *txt, int ini, int end);

/**
 * is_palindrome - function that probe if a string is palindrome
 * @s: char to review
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int n;

	n = _strlen_recursion(s);
	if (n == 0)
		return (1);
	return (palindrome(s, 0, n - 1));
}

/**
 * _strlen_recursion - function that probe if a string is palindrome
 * @len: char to review
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int _strlen_recursion(char *len)
{
	if (*len == '\0')
		return (0);
	len++;
	return (_strlen_recursion(len) + 1);
}

/**
 * palindrome - function that probe if a string is palindrome
 * @txt: char to review
 * @ini: sec
 * @end: ser
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int palindrome(char *txt, int ini, int end)
{
	if (txt[ini] != txt[end])
		return (0);
	if (ini < end + 1)
		return (palindrome(txt, ini + 1, end - 1));
	return (1);
}
