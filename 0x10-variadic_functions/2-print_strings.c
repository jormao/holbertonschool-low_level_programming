#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - function that print strings
 * @n: first value
 * @separator: second value
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list to_print;
	unsigned int count = 0;
	char *str;

	va_start(to_print, n);
	for (; count < n; count++)
	{
		str = va_arg(to_print, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && count != (n - 1))
			printf("%s", separator);
	}
	va_end(to_print);
	printf("\n");
}
