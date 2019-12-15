#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void rev_string(char *s);

void rev_string(char *s)
{

	int i = 0, j, k;
	char *a;
	char c;

	a = s;

	while (s[i] != '\0')
	{
		i++;
	}
	for (k = 1; k < i; k++)
	{
		a++;
	}
	for (j = 0; j < (i / 2); j++)
	{
		c = s[j];
		s[j] = *a;
		*a = c;
		a--;
	}
}

int main (void)
{
	int c = 100, b = 100, result = 0, palind = 0;
	int first = 0, second = 0;
	char buffer[10], *str_result, inv_result[10];

	for (; c < 1000; c++)
	{
		for (; b < 1000; b++)
		{
			result = c * b;
			str_result = itoa(result, buffer, 10);
			strcpy(inv_result, str_result);
			rev_string(inv_result);
			if (!(strcmp(str_result, inv_result)))
			{
				if (result > palind)
				{
					palind = result;
					first = c;
					second = b;
				}	
			}
		}	
		b= 100;
	}
	printf("%d = %d x %d\n", palind, first, second);
	return (0);
}
