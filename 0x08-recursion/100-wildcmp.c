#include "holberton.h"
int _check_asterisk(char *s3, int end_1);
int _equal_no_aster(char *s4, char *s5, int cont_2);
int identical_asterisk(char *s6, char *s7, int cont_3, int cont_4);

/**
 * wildcmp - function that compare two strings and consiere identicals
 * @s1: char to review
 * @s2: char to compare
 *
 * Return: 1 if identical, 0 else no identical
 */
int wildcmp(char *s1, char *s2)
{
	int check_asterisk, cont_1 = 0, cont_2 = 0, cont_3 = 0, cont_4 = 0;

	check_asterisk = _check_asterisk(s2, cont_1);
	if (check_asterisk == 0)
		return (_equal_no_aster(s1, s2, cont_2));
	if (check_asterisk == 1)
		return (identical_asterisk(s1, s2, cont_3, cont_4));
	return (2);
}
/**
 * _check_asterisk - function that check if there is a asterisk
 * @s3: char to review
 * @cont_1: contador
 *
 * Return: 1 if there is a *,else 0
 */
int _check_asterisk(char *s3, int cont_1)
{
	if (s3[cont_1] == '\0')
		return (0);
	if (s3[cont_1] == '*')
		return (1);
	return (_check_asterisk(s3, cont_1 + 1));
}
/**
 * _equal_no_aster - check if is equal with out asterisk
 * @s4: char to review
 * @s5: char to review
 * @cont_2: contador
 *
 * Return: 1 if there are equal, else 0
 */
int _equal_no_aster(char *s4, char *s5, int cont_2)
{
	if (s4[cont_2] != s5[cont_2])
		return (0);
	if ((s4[cont_2] == s5[cont_2]) && (s4[cont_2] == '\0'))
		return (1);
	if (s4[cont_2] == s5[cont_2])
		return (_equal_no_aster(s4, s5, cont_2 + 1));
	return (1);
}
/**
 * identical_asterisk - check if there are identical whit asterisk
 * @s6: char to review
 * @s7: char to review
 * @cont_3: contador
 * @cont_4: contador
 *
 * Return: 1 if s1 y s2 are identical, else 0
 */
int identical_asterisk(char *s6, char *s7, int cont_3, int cont_4)
{
	if ((s6[cont_3] != s7[cont_4]) && (s7[cont_4] == '*'))
		cont_4++;
	else if ((s6[cont_3] == s7[cont_4]) && (s7[cont_4] != '\0'))
		cont_4++;
	else if ((s6[cont_3] != s7[cont_4]) && (s7[cont_4 - 1] != '*'))
		return (0);
	if (s7[cont_4] == '*' && cont_3 != 0)
		cont_3--;
	if ((s6[cont_3] == s7[cont_4]) && (s7[cont_4] == '\0'))
		return (1);
	return (identical_asterisk(s6, s7, cont_3 + 1, cont_4));
}
